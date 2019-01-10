#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "ejercicio 2.16 "<< endl;
    cout<<"hola ingresa por favor dos numeros "<<endl;
    int n1,n2;
    cin>>n1>>n2;
    float d=(n1/n2);
    cout<<"la suma es: "<<(n1+n2)<<endl;
    cout<<"la multiplicacion es: "<<(n1*n2)<<endl;
    cout<<"la diferencia es: "<<(n1-n2)<<endl;
    cout<<"el cociente es: "<<d<<endl;
    cout<<"ejercicio 2.17 "<<endl;
    int a1=0;
    cout<<(a1+1)<<"\t"<<(a1+2)<<"\t"<<(a1+3)<<"\t"<<(a1+4)<<"\t"<<endl;
    cout<<"ejercicio 2.18 "<<endl;
    int num1,num2;
    cout<<"ingresa dos numeros "<<endl;
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"el numero mas grande es: "<<num1<<endl;
    }
    else if(num1<num2){
        cout<<"el numero mas grande es: "<<num2<<endl;
    }
    else{
        cout<<"estos numeros son iguales "<<num1<<" = "<<num2<<endl;
    }
    cout<<"ejercicio 2.19 "<<endl;
    int a,b,c;
    cout<<"hola ingrese tres numeros enteros para sumar y hallar su promedio "<<endl;
    cin>>a>>b>>c;
    cout<<"la suma es: "<<(a+b+c)<<endl;
    cout<<"el promedio es: "<<(a+b+c)/3<<endl;
    cout<<"el producto  es: "<<(a*b*c)<<endl;
    if(a>b){
        if(a>c){
            cout<<"el mayor numero es: "<<a<<endl;
        }
        else
            cout<<"el mayor numero es: "<<c<<endl;
    }
    else if(b>c){
        cout<<"el numero mayor es: "<<b<<endl;
    }
    else {cout<<"el mayor numero es: "<<c<<endl;}
    if(a<b){
        if(a<c){
            cout<<"el menor numero es: "<<a<<endl;
        }
        else
            cout<<"el memor numero es: "<<c<<endl;
    }
    else if(b<c){
        cout<<"el numero menor es: "<<b<<endl;
    }
    else {cout<<"el menor numero es: "<<c<<endl;}
    cout<<"ejercicio 2.20 "<<endl;
    int radio;
    const float pi=3.14159;
    cout<<"hallamos el radio de un circulo \n pi=3.14159"<<endl;
    cout<<"ingresa el radio "<<endl;
    cin>>radio;
    cout<<"el diametro del circulo es: "<<(2*radio)<<endl;
    cout<<"la circunferencia del circulo es: "<<(2*radio)*pi<<endl;
    cout<<"el area del circulo es: "<<(pi*(radio*radio))<<endl;
    cout<<"ejercicio 2.21 dibujar "<<endl;
    cout<<"*********\t"<<"  ***\t"<<"  *\t"<<"    *\t"<<endl;
    cout<<"*\t"<<"*\t"<<" *   *\t"<<" ***\t"<<"   * *\t"<<endl;
    cout<<"*\t"<<"*\t"<<"*     *\t"<<"*****\t"<<"  *   *\t"<<endl;
    cout<<"*\t"<<"*\t"<<"*     *\t"<<"  *\t"<<" *     *\t"<<endl;
    cout<<"*\t"<<"*\t"<<"*     *\t"<<"  *\t"<<"*       *\t"<<endl;
    cout<<"*\t"<<"*\t"<<"*     *\t"<<"  *\t"<<" *     *\t"<<endl;
    cout<<"*\t"<<"*\t"<<"*     *\t"<<"  *\t"<<"  *   *\t"<<endl;
    cout<<"*\t"<<"*\t"<<" *   *\t"<<"  *\t"<<"   * *\t"<<endl;
    cout<<"*********\t"<<"  ***\t"<<"  *\t"<<"    *\t"<<endl;
    cout<<"ejercicio 2.22 "<<endl;
    cout << "*\n**\n***\n****\n*****" << endl;
    cout<<"ejercicio 2.23 "<<endl;
    int m1=3,m2=46,m3=5,m4=27,m5=7;
    int mayor=0;
    int menor=0;
    if(m1<m2){
        mayor=m2;
        if(mayor>m3){
            if(mayor>m4){
                if(mayor>m5){
                    cout<<"el mayor numero es: "<<mayor<<endl;
                }
                else cout<<"el mayor numero es: "<<m5<<endl;
            }
            else {mayor=m4;
                if(mayor>m5){cout<<"el mayor numero es: "<<mayor<<endl;}
                else cout<<"el mayor numero es:"<<m5<<endl;
            }
        }
        else {mayor=m3;
            if(mayor>m4){
                if(mayor>m5){
                    cout<<"el mayor numero es: "<<mayor<<endl;
                }
                else cout<<"el mayor numero es: "<<m5<<endl;
            }
            else {
                mayor=m4;
                if(mayor>m5){
                    cout<<"el mayor numero es: "<<mayor<<endl;
                }
                else cout<<"el mayor numero es: "<<m5<<endl;
            }
        }
    }
    else {
        mayor=m1;
        if(mayor>m3){
            if(mayor>m4){
            if(mayor>m5){
                cout<<"el mayor numero es: "<<mayor<<endl;
            }
            else
                cout<<"el mayor numero es: "<<m5<<endl;
            }
            else {
                mayor=m4;
                if(mayor>m5){cout<<"el mayor numero es: "<<mayor<<endl;}
                else cout<<"el mayor numero es: "<<m5<<endl;
            }
        }
        else{
            mayor=m3;
            if(mayor>m4){
                if(mayor>m5){
                    cout<<"el mayor numero es: "<<mayor<<endl;
                }
                else cout<<"el mayor numeroes: "<<m5<<endl;
            }
            else
            {
                mayor=m4;
                if(mayor>m5){
                    cout<<"el mayor numero es: "<<mayor<<endl;
                }
                else
                    cout<<"el mayor numero es :"<<m5<<endl;
            }

        }

    }
     if(m1<m2){
        menor=m1;
        if(menor<m3){
            if(menor<m4){
                if(menor<m5){
                    cout<<"el menor numero es: "<<menor<<endl;
                }
                else cout<<"el menor  numero es: "<<m5<<endl;
            }
            else {menor=m4;
                if(menor<m5){cout<<"el menor numero es: "<<menor<<endl;}
                else cout<<"el menor numero es:"<<m5<<endl;
            }
        }
        else {menor=m3;
            if(menor<m4){
                if(menor<m5){
                    cout<<"el menor numero es: "<<menor<<endl;
                }
                else cout<<"el menor numero es: "<<m5<<endl;
            }
            else {
                menor=m4;
                if(menor<m5){
                    cout<<"el menor numero es: "<<menor<<endl;
                }
                else cout<<"el menor numero es: "<<m5<<endl;
            }
        }
    }
    else {
        menor=m2;
        if(menor<m3){
            if(menor<m4){
            if(menor<m5){
                cout<<"el menor numero es: "<<menor<<endl;
            }
            else
                cout<<"el menor numero es: "<<m5<<endl;
            }
            else {
                menor=m4;
                if(menor<m5){cout<<"el menor numero es: "<<menor<<endl;}
                else cout<<"el menor numero es: "<<m5<<endl;
            }
        }
        else{
            menor=m3;
            if(menor<m4){
                if(menor<m5){
                    cout<<"el menor numero es: "<<menor<<endl;
                }
                else cout<<"el menor numeroes: "<<m5<<endl;
            }
            else
            {
                menor=m4;
                if(menor<m5){
                    cout<<"el menor numero es: "<<menor<<endl;
                }
                else
                    cout<<"el menor numero es :"<<m5<<endl;
            }

        }

    }


    cout<<"ejercicio numero 2.24 "<<endl;
    int nu1;
    cout<<"ingresa un numero para ver si es par o impar "<<endl;
    cin>>nu1;
    if(nu1%2==0)
        cout<<"el numero es par"<<endl;
    else
        cout<<"el numero es impar "<<endl;
    cout<<"ejercicio 2.25 "<<endl;
    int primer,seg;
    cout<<"ingresa dos numero para verifivar si el primero es multiplo del segundo "<<endl;
    cin>>primer>>seg;
    if(primer%seg==0)
        cout<<primer<<" es multiplo del "<<seg<<endl;
    else
        cout<<primer<<" no es multiplo del "<<seg<<endl;
    cout<<"ejercicio 2.26 "<<endl;
    cout<<"********\n";
    cout<<" ********\n";
    cout<<"********\n";
    cout<<" ********\n";
    cout<<"********\n";
    cout<<" ********\n";
    cout<<"********\n";
    cout<<" ********\n";
    for(int i=0;i<4;i++){
        cout<<"********\n";
        cout<<" ********\n";
    }
    cout<<"ejercicio 2.27 "<<endl;
    char letra;
    cout<<"ingresa una letra "<<endl;
    cin>>letra;
    if((static_cast<int>(letra)>=65 && static_cast<int>(letra)<=90) || (static_cast<int>(letra)>=97 && static_cast<int>(letra)<=122))
        cout<<" esta ubicado en ascii el numero "<<static_cast<int>(letra)<<endl;
    cout<<"ejercicio 2.28 "<<endl;
    string cinco;
    cout<<"ingresa un numero de cinco digitos "<<endl;
    cin>>cinco;
    for(int i=0;i<5;i++){
        cout<<cinco[i]<<"\t";
    }
    cout<<endl<<"ejercicio 2.29 "<<endl;
    for(int i=0;i<10+1;i++){
        cout<<(i)<<"\t"<<(i*i)<<"\t"<<(i*i*i)<<endl;
    }
    cout<<"ejercicio 2.30 "<<endl;
    float peso,talla,imc;
    cout<<"cuanto pesas en kg"<<endl;
    cin>>peso;
    cout<<"cuanto mides en metros "<<endl;
    cin>>talla;
    imc=(peso/(talla*talla));
    if(imc>0 && imc<18.5){
        cout<<"estas bajo de peso "<<endl;
    }
    else if(imc>=18.5 && imc<=24.9){
        cout<<"tienes un peso normal "<<endl;
    }
    else if(imc>=25 && imc<=29.9){
        cout<<"estas en sobrepeso "<<endl;
    }
    else
        cout<<"estas en obesidad "<<endl;
    cout<<"ejercicio 2.31 "<<endl;
    cout<<" 25 millas utiliza un galon "<<endl;

    float gal=3.98;
    float peaje=5.50;
    float peaje1=3.1;
    float millas=25;
    float milla;
    int dinero=10000;
    cout<<"digamos que tu tienes 10000 "<<endl;
    cout<<"cuantas millas recorre por un dia "<<endl;
    cin>>milla;
    cout<<"recorres "<<milla<<"millas y gastas  "<<((milla*millas)*gal)<<endl;
    cout<<"si vas a comprar 8 galones gastas "<<(gal*8)<<"entonces del dinero que tienes gastaria "<<(dinero-(gal*8))<<endl;
    cout<<"en una milla cuantas galones gasta "<<(25/3.98)<<endl;
    cout<<"los gasto de peaje "<<peaje<<endl;


    return 0;
}
