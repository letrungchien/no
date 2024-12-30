#include <stdio.h>
#include <stdlib.h>
#include"functions.h"
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Student students[100]; 
int studentCount = 0;

int main(int argc, char *argv[]) {
	int choice;
	int choiceAdmin;
	int choicestudent;
    int n = 0;  
    int maxSize = 100;

	do{
	   startTheProgram();
	   scanf("%d",&choice);
	switch(choice){
		case 1:
			do{
				menuAdmin();
				scanf("%d",&choiceAdmin);
			    	switch(choiceAdmin){
			    		
			    		
					case 1:
	                       do{
	                       	 
				              studentManagement();
				              
				              scanf("%d",&choicestudent);
			    	         switch(choicestudent){
					             case 1:
					                //inputStudentInfo(students,&n,maxSize);
									 addStudent(students, &n,maxSize);
			                       break;
			                     case 2:
			                     	 printStudents(students, n);
			                       break;
	                             case 3:
	                             	//searchStudentById(students, n);
									
	                               break;
			                     case 4:
			                       break;
			                     case 5:
			                     	//deleteStudent(students,n);
			                       break;
			                     default:
			                       invalidSelection();
			                  	}
			                  }while(choiceAdmin !=0);
                        
			          break;
			        case 2:
			          break;
	                case 3:
				      break;	
			        case 4:
			          break;
			        case 5:
			          break;
			        default:
			          invalidSelection();
				}
			}while(choiceAdmin !=0);
			 break;
		case 2:			
			 break;	
		case 3:
		     break;
		case 0:
			endOfTheProgram();
			 break;	
		default:
		   invalidSelection();
	}
   }while(choice != 0);  

	return 0;

}
