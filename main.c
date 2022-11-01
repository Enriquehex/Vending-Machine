#include <stdio.h>
#include <stdlib.h>

void takeproduct (float gold, float coins,char snack[]){
    float total=0;

    total= coins - gold; //resultado de vuelto

    if(total > 0.00){
        printf("Producto retirado: %s\n",snack);
        printf("Vuelto: %f\n",total);
        printf("Retire su Vuelto\n");
    }
    else if (total == 0.00){
        printf("Producto retirado: \n");
    }
    else
        printf("Monto insuficiente, Ingrese mas dinero\n");
}

int main()
{
    int i,j=0,number,front,menu,select;//select monto. //i, j contador
    char product[48][10],producto; //48 filas de productos 10 columnas.
    float price[48],precio,monto; //48 filas de precios

    //Bienvenido! Al SNACK de las MENTIRAS
    //Puedes Ingresar sus productos imaginarios!

    //Recuerde el nombre del producto no debe llevar espacios
    //Y que sea menor que 10 caracteres. PORFAVOR!
    //Proceda a introducir sus productos~

    for (i=0;i < 3; i++){ //12 productos, 8*3 = 24, 24/2 = 12
    j++; //solo es un contador para mostrar cantidad de producto

    printf("Nombre del producto n%d: ",j);
    scanf("%s",&product[i]);
    printf("Precio del producto n%d: ",j);
    scanf("%f",&price[i]);

    //price[i+1]= price[i]; //guardador de precio en fila de 2 en 2
    }

    /*for (i=13;i < 48; i++){
    j++; //solo es un contador para mostrar cantidad de producto

    printf("Nombre del producto n%d: ",j);
    scanf("%s", &product[i]);

    printf("Precio del producto n%d: ",j);
    scanf("%f", &price[i]);
    }
    */
    //menu para seleccionar el producto
    system("cls");

    //Snacky de las Mentiras
    do{

    printf ("producto\n");

    printf("1. Desea ingresar monto\n");
    printf("2. Desea retirar un producto\n");
    printf("3. Salir\n");

    printf("Ingresar Seleccion: ");
    scanf("%d",&menu);

        if (menu==1){
            do {
                printf("1: 0.05\n");
                printf("2: 0.10\n");
                printf("3: 0.25\n");
                printf("4: 0.50\n");
                printf("5: 1.00\n");
                printf("6: retirar un producto \n\n");

                printf("Monto ingresado: %.2f\n",monto);

                printf("Ingrese su monto: ");

                scanf("%d",&select);

                if(select==1){
                    monto = monto + 0.05;
                    system("cls");
                }
                else if (select==2){
                    monto = monto + 0.10;
                    system("cls");
                }
                else if (select==3){
                    monto = monto + 0.25;
                    system("cls");
                }
                else if (select==4){
                    monto = monto + 0.50;
                    system("cls");
                }
                else if (select==5){
                    monto = monto + 1.00;
                    system("cls");
                }
                else if (select==6){
                }
                else {
                    printf("Ingreso numero Invalido\n");
                }
            }
            while (select !=6);

        }
        else if (menu==2){
            if (monto <= 0){

              printf("usted no posee monto");
            }
            else{
                printf("Seleccione el numero frontal: ");
                scanf("%d",&front);
                printf("Seleccione el numero trasero: ");
                scanf("%d",&number);

                switch(front){

                    case 1:{
                        if(number > 0  &&  number <= 8 ){
                        precio = price[number];
                        producto = product[number];
                        printf("%f",price[number]);
                        printf("%s",product[number]);
                        takeproduct (precio, monto,producto);//funcion
                        }
                        else{
                            printf("Numero invalido: %d",i);
                        }
                        break;
                    }

                    case 2:{
                        if(number > 8 && number <= 16 ){
                        precio = price[number];
                        producto = product[number];
                        takeproduct (precio, monto,producto);
                        }
                        else{
                            printf("Slot Equivocado");
                        }
                        break;
                    }
                    case 3:{
                        if(number > 16 && number <= 24 ){
                        precio = price[number];
                        producto = product[number];
                        takeproduct (precio, monto,producto);
                        }
                        else{
                            printf("Slot Equivocado");
                        }
                        break;
                    }
                    case 4:{
                        if(number > 24 && number <= 32 ){
                        precio = price[number];
                        producto = product[number];
                        takeproduct (precio, monto,producto);
                        }
                        else{
                            printf("Slot Equivocado");
                        }
                        break;
                    }
                    case 5:{
                        if(number > 32 && number <= 40 ){
                        precio = price[number];
                        producto = product[number];
                        takeproduct (precio, monto,producto);
                        }
                        else{
                            printf("Slot Equivocado");
                        }
                        break;
                    }
                    case 6:{
                        if(number > 40 && number <= 48 ){
                        precio = price[number];
                        producto = product[number];
                        takeproduct (precio, monto,producto);
                        }
                        else{
                            printf("Slot Equivocado");
                        }
                        break;
                    }
                    case 7:{
                        break;
                    }
                    default:
                        printf("Ingreso numero Invalido\n");
                        break;
                }
            }
        }
        else if (menu==3){
            printf("El programa se cerrara\n");
        }
        else {
            printf("Ingreso un numero invalido\n");
        }


    }
    while(menu != 3);

    return 0;
}
