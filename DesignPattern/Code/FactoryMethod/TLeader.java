
package employeemanagement;

public class TLeader implements Employee{

    @Override
    public double CalcSalary(int h) {
        return h*10;
    }
    
}
