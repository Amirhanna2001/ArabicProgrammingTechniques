
package employeemanagement;

public class EmployeeFactory implements IEmployeeFactory{

    @Override
    public Employee GetEmployee(String position) {
        position = position.toUpperCase();
         if(position.equals("TESTER"))
            return new Tester();
         
        else if(position.equals("TEAMLEADER"))
            return new TLeader();
          
        else if(position.equals("XYZ"))
            return new XYZ();
        
         return null;
    }
    
}
