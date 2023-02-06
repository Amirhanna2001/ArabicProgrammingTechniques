package employeemanagement;

import java.util.Scanner;

public class EmployeeManagement {

    public static void main(String[] args) {
        // TODO code application logic here
        Scanner input =  new Scanner(System.in);
        System.out.println("Enter Your Position");
        String position = input.next();
        EmployeeFactory employeeFactory = new EmployeeFactory();
        
        Employee e1 = employeeFactory.GetEmployee(position);
        
        System.out.println(e1.CalcSalary(10));
       
            
        
            
    }
    
}
