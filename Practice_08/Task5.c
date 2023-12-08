/* Task 05: Read file letters.txt'. Read count of each alphabet including both capital (A to Z) and small
alphabets (a to z). Print count of each alphabet:
Sample Output:
Count of A: 297
Count of B: 53 */

#include<stdio.h>
int main(){
   int  n = 1;
   char c;
    
    int A_lower_count = 0;
    int B_lower_count = 0;
    int C_lower_count = 0;
    int D_lower_count = 0;
    int E_lower_count = 0;
    int F_lower_count = 0;
    int G_lower_count = 0;
    int H_lower_count = 0;
    int I_lower_count = 0;
    int J_lower_count = 0;
    int K_lower_count = 0;
    int L_lower_count = 0;
    int M_lower_count = 0;
    int N_lower_count = 0;
    int O_lower_count = 0;
    int P_lower_count = 0;
    int Q_lower_count = 0;
    int R_lower_count = 0;
    int S_lower_count = 0;
    int T_lower_count = 0;
    int U_lower_count = 0;
    int V_lower_count = 0;
    int W_lower_count = 0;
    int X_lower_count = 0;
    int Y_lower_count = 0;
    int Z_lower_count = 0;


        
    int a_lower_count = 0;
    int b_lower_count = 0;
    int c_lower_count = 0;
    int d_lower_count = 0;
    int e_lower_count = 0;
    int f_lower_count = 0;
    int g_lower_count = 0;
    int h_lower_count = 0;
    int i_lower_count = 0;
    int j_lower_count = 0;
    int k_lower_count = 0;
    int l_lower_count = 0;
    int m_lower_count = 0;
    int n_lower_count = 0;
    int o_lower_count = 0;
    int p_lower_count = 0;
    int q_lower_count = 0;
    int r_lower_count = 0;
    int s_lower_count = 0;
    int t_lower_count = 0;
    int u_lower_count = 0;
    int v_lower_count = 0;
    int w_lower_count = 0;
    int x_lower_count = 0;
    int y_lower_count = 0;
    int z_lower_count = 0;
   
   FILE *file = fopen("letters.txt", "r");
    while (n <= 5575){
    fscanf (file, "%c", &c);
    
                if (c == 'a') {
                    a_lower_count++;
                } else if (c == 'b') {
                    b_lower_count++;
                } else if (c == 'c') {
                    c_lower_count++;
                }else if (c == 'd') {
                    d_lower_count++;
                }else if (c == 'e') {
                    e_lower_count++;
                }else if (c == 'f') {
                    f_lower_count++;
                }else if (c == 'g') {
                    g_lower_count++;
                }else if (c == 'h') {
                    h_lower_count++;
                }else if (c == 'i') {
                    i_lower_count++;
                }else if (c == 'j') {
                    j_lower_count++;
                }else if (c == 'k') {
                    k_lower_count++;
                }else if (c == 'l') {
                    l_lower_count++;
                }else if (c == 'm') {
                    m_lower_count++;
                }else if (c == 'n') {
                    n_lower_count++;
                }else if (c == 'o') {
                    o_lower_count++;
                }else if (c == 'p') {
                    p_lower_count++;
                }else if (c == 'q') {
                    q_lower_count++;
                }else if (c == 'r') {
                    r_lower_count++;
                }else if (c == 's') {
                    s_lower_count++;
                }else if (c == 't') {
                    t_lower_count++;
                }else if (c == 'u') {
                    u_lower_count++;
                }else if (c == 'v') {
                    v_lower_count++;
                }else if (c == 'w') {
                    w_lower_count++;
                }else if (c == 'x') {
                    x_lower_count++;
                }else if (c == 'y') {
                    y_lower_count++;
                }else if (c == 'z') {
                    z_lower_count++;
                }else if (c == 'A') {
                    A_lower_count++;
                } else if (c == 'B') {
                    B_lower_count++;
                } else if (c == 'C') {
                    C_lower_count++;
                }else if (c == 'D') {
                    D_lower_count++;
                }else if (c == 'E') {
                    E_lower_count++;
                }else if (c == 'f') {
                    f_lower_count++;
                }else if (c == 'g') {
                    g_lower_count++;
                }else if (c == 'h') {
                    h_lower_count++;
                }else if (c == 'i') {
                    i_lower_count++;
                }else if (c == 'j') {
                    j_lower_count++;
                }else if (c == 'k') {
                    k_lower_count++;
                }else if (c == 'l') {
                    l_lower_count++;
                }else if (c == 'm') {
                    m_lower_count++;
                }else if (c == 'n') {
                    n_lower_count++;
                }else if (c == 'o') {
                    o_lower_count++;
                }else if (c == 'p') {
                    p_lower_count++;
                }else if (c == 'q') {
                    q_lower_count++;
                }else if (c == 'r') {
                    r_lower_count++;
                }else if (c == 's') {
                    s_lower_count++;
                }else if (c == 't') {
                    t_lower_count++;
                }else if (c == 'u') {
                    u_lower_count++;
                }else if (c == 'v') {
                    v_lower_count++;
                }else if (c == 'w') {
                    w_lower_count++;
                }else if (c == 'x') {
                    x_lower_count++;
                }else if (c == 'y') {
                    y_lower_count++;
                }else if (c == 'z') {
                    z_lower_count++;
                }




    fscanf (file, "%c", &c);
    n = n + 1;
}
return 0;
}

/*
#include <stdio.h>

int main() {
   
    FILE *file = fopen("letters.txt", "r");

    if (file == NULL) {
        printf("File 'letters.txt' not found or could not be opened.\n");
        return 1;
    }

   
  

 
    

   
      
                
            } else if (isupper(c)) {
                if (c == 'A') {
                    a_upper_count++;
                } else if (c == 'B') {
                    b_upper_count++;
                } else if (c == 'C') {
                    c_upper_count++;
                }
                
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the counts for each alphabet character in both lowercase and uppercase
    printf("Lowercase counts:\n");
    printf("'a': %d\n", a_lower_count);
    printf("'b': %d\n", b_lower_count);
    printf("'c': %d\n", c_lower_count);
    // Repeat this for all lowercase alphabet characters 'a' through 'z'

    printf("Uppercase counts:\n");
    printf("'A': %d\n", a_upper_count);
    printf("'B': %d\n", b_upper_count);
    printf("'C': %d\n", c_upper_count);
    // Repeat this for all uppercase alphabet characters 'A' through 'Z'

    return 0;
}

*/


