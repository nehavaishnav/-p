
#include<stdio.h>

int main() {
    int baseaddress = 1000;
    int element_size = sizeof(int);
    int rowmajor;
    int coloumnmajor;

    int i1, i2, i3;

    for(i1 = 0; i1 < 2; i1++) {
        for(i2 = 0; i2 < 3; i2++) {
            for(i3 = 0; i3 < 4; i3++) {
                rowmajor = baseaddress + ((i1 * 3 * 4) + (i2 * 4) + i3) * element_size;
                coloumnmajor = baseaddress + ((i3 * 2 * 3) + (i2 * 2) + i1) * element_size;

                printf("Address of index arr2[%d %d %d]:\n", i1, i2, i3);
                printf("Row Major Address: %d\n", rowmajor);
                printf("Column Major Address: %d\n", coloumnmajor);
            }
        }
    }

    return 0;
}
// #include<stdio.h>
// int main()
// {
// int baseaddress=1000;
//     int element_size=sizeof(int);
//     int rowmajor;
//     int coloumnmajor;
//     //int *base2;
//    // base2=arr2;
//     //printf("%u", baseaddress);
//     //printf("\n%u",baseaddress+1);
//     int i1,i2,i3;
//     for(i1=0;i1<2;i1++){
//         for(i2=0;i2<3;i2++){
//              for(i3=0;i3<4;i3++){
//                       rowmajor=baseaddress+((i1*3*4)+(i2*4)+(i3))*element_size;
//             coloumnmajor=baseaddress+((i3*2*3)+(i2*2)+i1)*element_size;
           
//             printf("Address of index: arr2[%d %d %d]:",i1,i2,i3);
//              printf("\n Row Major Address %d",rowmajor);
//                printf("\n Coloumn Major Address %d",coloumnmajor);
      

//              }}}}