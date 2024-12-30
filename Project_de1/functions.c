#include<stdio.h>
#include"functions.h"
#include<string.h>

  void startTheProgram(){
	printf("***Student Management System Using C***\n");
    printf("\n");
    printf("           CHOOSE YOUR ROLE\n");
    printf("        =========================\n");
    printf("        [1] Admin.\n");
    printf("        [2] Student.\n");
    printf("        [3] Teacher.\n");
    printf("        [0] Exit the Program.\n");
    printf("        =========================\n");
    printf("        Enter The Choice: ");
}
  void menuAdmin(){
    printf("***Student Management System Using C***\n");
    printf("\n");
    printf("                MENU\n");
    printf("        =========================\n");
    printf("        [1] Students management.\n");
    printf("        [2] Classrooms management.\n");
    printf("        [3] Teacher management.\n");
    printf("        [4] User Guideline.\n");
    printf("        [5] About Us.\n");
    printf("        [0] Exit the Program.\n");
    printf("        =========================\n");
    printf("        Enter The Choice: ");
 	
}
  void studentManagement(){
  	 printf("***Student Management System Using C***\n");
    printf("\n");
    printf("              STUDENT MENU\n");
    printf("        =========================\n");
  //  printf("        [1] Enter student information.\n ");
    printf("        [1] Add A New student.\n");
    printf("        [2] Show All student.\n");
    printf("        [3] Search A student.\n");
    printf("        [4] Edit A student.\n");
    printf("        [5] Delete A student.\n");
    printf("        [0] Exit the Program.\n");
    printf("        =========================\n");
    printf("        Enter The Choice: ");

  	
  }
  void invalidSelection(){
	
    printf("\n");
    printf("\n");
    printf("========== Invalid Selection  =======\n");
    printf("\n");
    printf("\n");

}
  void endOfTheProgram(){
	printf("\n");
    printf("========== Thank You =======\n");
    printf("========== See You Soon ====\n");
    printf("\n");
}
  void inputStudentInfo(Student students[], int *n, int maxSize) {
    int numToAdd;
    printf("Nhap so luong sinh vien muon them: \n");
    scanf("%d", &numToAdd);
    getchar(); 

    for (int i = 0; i < numToAdd; i++) {
        
        snprintf(students[*n].studentId, 10, "%d", *n + 1);


        printf("Moi ban nhap vao ten sinh vien: \n");
        fgets(students[*n].name, 20, stdin);
        students[*n].name[strcspn(students[*n].name, "\n")] = '\0'; 

        printf("Moi ban nhap vao ma lop hoc: \n");
        fgets(students[*n].classroomId, 10, stdin);
        students[*n].classroomId[strcspn(students[*n].classroomId, "\n")] = '\0';

        
        printf("Moi ban nhap vao so dien thoai: \n");
        fgets(students[*n].phone, 15, stdin);
        students[*n].phone[strcspn(students[*n].phone, "\n")] = '\0';

        
        printf("Moi ban nhap vao email: \n");
        fgets(students[*n].email, 30, stdin);
        students[*n].email[strcspn(students[*n].email, "\n")] = '\0';

        
        printf("Moi ban nhap vao ngay thang nam sinh (dd/mm/yyyy): \n");
        fgets(students[*n].birthDate, 15, stdin);
        students[*n].birthDate[strcspn(students[*n].birthDate, "\n")] = '\0';

        
        printf("Moi ban nhap vao gioi tinh (Nam/Nu): \n");
        fgets(students[*n].gender, 10, stdin);
        students[*n].gender[strcspn(students[*n].gender, "\n")] = '\0';

        (*n)++;  
        printf("\n");
        printf("\n");
    }
}
  void printStudents(Student students[], int n) {
	printf("\n");
    printf("       **** All Students ****\n");
    printf("\n");
    printf("|=======|==================|==============|=======================|===============|===========|========|\n");
    printf("|   ID  |     Name         | classroomId  |        Email          |    Phone      | birthDate | gender |\n");
    printf("|=======|==================|==============|=======================|===============|===========|========|\n");

    for (int i = 0; i < n; i++) {
        printf("| %-5s | %-16s | %-12s | %-21s | %-13s | %-9s | %-6s |\n", 
               students[i].studentId, 
               students[i].name, 
               students[i].classroomId, 
               students[i].email, 
               students[i].phone, 
               students[i].birthDate, 
               students[i].gender);
        printf("|=======|==================|==============|=======================|===============|===========|========|\n");
    }
    	printf("\n");
    	printf("Go back(b)? or Exit(0)?: ");
    	printf("\n");
}
  void addStudent(Student students[], int *n, int maxSize) {
    
        printf("   **** Add A New Student ****\n");
    int  id;
    
    printf("Enter The ID: ");
    scanf("%s", &id);
    getchar(); 
     
    
   for (int i = 0; i < *n; i++) {
      if (students[i].studentId == id) {
       printf("Error: This ID is alredy exists.");
 }
}
      

    //students[*n].studentId = id;
    printf("Enter The Name: ");
    fgets(students[*n].name, 20, stdin);
    students[*n].name[strcspn(students[*n].name, "\n")] = '\0';

    printf("Enter The ClassroomId: ");
    fgets(students[*n].classroomId, 10, stdin);
    students[*n].classroomId[strcspn(students[*n].classroomId, "\n")] = '\0';

    printf("Enter The Email: ");
    fgets(students[*n].email, 30, stdin);
    students[*n].email[strcspn(students[*n].email, "\n")] = '\0';

    printf("Enter The Phone: ");
    fgets(students[*n].phone, 20, stdin);
    students[*n].phone[strcspn(students[*n].phone, "\n")] = '\0';
    
    printf("Enter The BirthDate (dd/mm/yyyy): ");
    fgets(students[*n].birthDate, 15, stdin);
    students[*n].birthDate[strcspn(students[*n].birthDate, "\n")] = '\0';

    printf("Enter The gender: ");
    fgets(students[*n].gender, 10, stdin);
    students[*n].gender[strcspn(students[*n].gender, "\n")] = '\0';

    
    (*n)++;
    printf("Sinh vien da duoc them thanh cong.\n");
}

void searchStudentById(Student students[], int n) {
    
    int id;
    printf("Nhap ID sinh vien can tim: ");
    scanf("%d", &id);
    getchar(); 

    char idStr[10];
    sprintf(idStr, "%d", id); 
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].studentId, idStr) == 0) {
    printf("|=======|==================|==============|=======================|===============|===========|========|\n");
    printf("|   ID  |     Name         | classroomId  |        Email          |    Phone      | birthDate | gender |\n");
    printf("|=======|==================|==============|=======================|===============|===========|========|\n");
    printf("| %-5s | %-16s | %-12s | %-21s | %-13s | %-9s | %-6s |\n",
               students[i].studentId, 
               students[i].name, 
               students[i].classroomId, 
               students[i].email, 
               students[i].phone, 
               students[i].birthDate, 
               students[i].gender);
    printf("|=======|==================|==============|=======================|===============|===========|========|\n");
    
            return;
        }
    }

    printf("Khong tim thay sinh vien voi ID %s.\n", idStr);
}
//   void deleteStudent(students,n){
//   	int id;
//   	char idStr[10];
//   	printf(" **** Delete a Student ****\n");
//   	printf("\n");
//   	printf("Enter The Student ID:");
//   	scanf("%d",&id);
//    sprintf(idStr, "%d", id); 
//    for (int i = 0; i < n; i++) {
//        if (strcmp(students[i].studentId, idStr) == 0) {
//        	printf("One Student Found For ID: %d",id);
//        	printf("\n");
//        	printf("Student Tnformations\n")
//        	printf("------------------------\n");
//        	printf("ID:         %s\n",students[i].studentId);
//            printf("Name:       %s\n",students[i].name) ;
//            printf("Email:      %s\n",students[i].email) ;
//            printf("Phone:      %s\n",students[i].phone);
//            printf("Birth Date: %s\n",students[i].birthDate) ;
//            printf("Gender:     %s\n",students[i].gender);
//            printf("\n");
//            printf("\n");
//            printf("Are you sure want to delete this student? (Y/N): \n");
//   }
//   
