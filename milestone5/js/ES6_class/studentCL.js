function main(){
    class Person{
        // name;
        // age;
        // gender;
        
        constructor(name, age, gender){
            this.name=name;
            this.age=age;
            this.gender=gender;
        }
        
        speak(){
            console.log(`Hello, my name is ${this.name} and I am ${this.age} years old.`);
        }
    }
    
    class Student{
      // major;
      // gpa;
        
        constructor(person, major, gpa){
            this.Person=person;
            this.major=major;
            this.gpa=gpa;
        }
        
        study(){
            console.log(`I am studying ${this.major} and my GPA is ${this.gpa}.`);
        }
        
        speak(){
            console.log(`Hello, my name is ${this.name} and I am ${this.age} years old. I am also a student studying ${this.major}.`);
        }
    }

    const person1 = new Person("John",20,"M");

person1.speak();

const stud1 = new Student(person1,"CS",9);

stud1.speak();

stud1.study();
    return {Person,Student};
}

main();