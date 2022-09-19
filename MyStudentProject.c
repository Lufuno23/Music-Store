using System;
{
   public class Program
   {
      public static void Main(string{} strings)
      {
          student student = new student();
          student.Init("James Row",1234);
          Console.WriteLine
            ("Enrolling James Row in Maths 101");
            student.Enroll("Maths 101");
            Console.WriteLine("Resulting student record");
            student.DisplayCourse();
            Console.WriteLine("Press Enter to terminate..");
            }
        }
        
        public class Student
        {
         public string _ name;
         public int _id;
         
         CourseInstance _courseInstance;
         
         public void Init (string name; int id)
         {
            this._name = name;
            this._id = id;
            _courseInstance = null
         }
          public void enroll (string courseID)
          {
            _courseInstance = new CourseInstance
            _courseInstance.Init(this,courseID
          }
          
          public void DisplayCourse
          {
            Console.WriteLine(_name);
            _courseInstance.Display();
          }
          
          public class CourseInstance
          {
            public Student _student;
            puclic string _courseID;
          }
          
          public void Init(Student student,string courseID)
          {
            this._student = student;
            this._courseID = courseID
          }
          public void Display()
          {
            Conslo.WriteLine(_courseID)
          }
     }