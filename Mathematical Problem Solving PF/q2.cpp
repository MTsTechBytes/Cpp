using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    double ogPrice, markupPrice,  markupPricePercentage, salesTaxRate, salesTax, sellingPrice, finalPrice;

    cout<<"Enter the origional price of the item:"<<endl;
    cin>>ogPrice;

    cout<<"Enter the Percentage of marked-up price of the item:"<<endl;
    cin>>markupPricePercentage;

    cout<<"Enter the sales tax rate in %:"<<endl;
    cin>>salesTaxRate;
    
    markupPrice=(markupPricePercentage/100.0)*ogPrice;
    sellingPrice= ogPrice+markupPrice;
    salesTax= (salesTaxRate/100.0) * sellingPrice;
    finalPrice= sellingPrice + salesTax ;
    
    

    cout<<"The original price of the product is : "<<ogPrice<<endl;

    cout<<"The percentage of mark-up price is : "<<markupPricePercentage<<endl;

    cout<<"The store's selling price of the product is : "<<sellingPrice<<endl;

    cout<<"The sales tax on the product is : "<<salesTax<<endl;

    cout<<"The final price of the product is : "<<finalPrice <<endl;
    return 0;

}   