#include <stdio.h>

int main() {
    int physics, chemistry, mathematics, total_marks, total_maths_physics;

    // Input marks
    printf("Enter marks of Physics: ");
    scanf("%d", &physics);
    printf("Enter marks of Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks of Mathematics: ");
    scanf("%d", &mathematics);
    printf("Enter total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_marks);
    printf("Enter total marks of Maths and Physics: ");
    scanf("%d", &total_maths_physics);

    // Check eligibility
    if (physics >= 55 && chemistry >= 50 && mathematics >= 65) {
        printf("The candidate is eligible for admission.\n");
    }else if(total_marks >= 190){
    	printf("The candidate is eligible for admission.\n");
	}
	 else if (total_maths_physics >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

}

