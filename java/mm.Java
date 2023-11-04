import java.util.*;
import java.io;

class student  
{
    int rollno;
    int marks;
    string name;



public : student(int rollno,int marks,string name)
{

    this.rollno = rollno;
    this.marks = marks;
    this.name = name;


}


public String display()
{

    return rollno+"  " +marks+" "+name+" ";


}
}

public class mm
{

public static void main(String[] args)
{

    student s1 = new student(1,60,"ss");
    s1.display();

//     file f1 = new file("student.txt");

//    f1.write(s1);


}


}