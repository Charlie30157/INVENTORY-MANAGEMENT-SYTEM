#include<stdio.h>
#include<string.h>

struct product{
  int productID;
  char productname [100];
  float productprice;
  int productquantity;
};

struct supplier {
  int supplierID;
  char suppliername[300];
  char supplieraddress[300];
};

struct transaction {
  int transactionID;
  char transactiondate[100];
};

struct transaction transactions[200];
int transactioncount =0;

struct supplier suppliers[200];
int suppliercount =0 ;

struct product products[200];
int productcount =0;

void transactiondetails ()
{
  int  id;
  printf("Enter the id of the  : ");scanf("%d",&id);
  for (int i=0;i<transactioncount;i++)
  {
    if (transactions[i].transactionID == id)
    {
      printf("Transaction ID :%d\n",transactions[i].transactionID);
      printf("Product name :%s\n",products[i].productname);
      printf("Product quantity :%d\n",products[i].productquantity);
      printf("Transaction date :%s\n",transactions[i].transactiondate);
    }
    else printf("Invalid");
  }
}

void addtransaction()
{
  struct transaction newtransaction;
  struct product newproduct;
  printf("Enter the transaction id : ");
  scanf("%d",&newtransaction.transactionID);
  printf("Enter the Product name :");
  scanf("%s",newproduct.productname);
  printf("Enter the product quantity :");
  scanf("%d",&newproduct.productquantity);
  printf("Enter the transaction date :");
  scanf("%s",newtransaction.transactiondate);
  transactions[transactioncount++]=newtransaction;
  printf ("Your transaction is added\n ");
}

void updatetransaction()
{
  int id;
  printf("Enter the transaction id : ");scanf("%d",&id);
  int i,j;
  for(int i=0;i<transactioncount;i++)
  {
    if (transactions[i].transactionID==id)
    {
      printf("Enter the new product name : ");
      scanf("%s",products[i].productname);
      printf("Enter new product quantity :");
      scanf("%d",&products[i].productquantity);
      printf("Enter the new transaction date :");
      scanf("%s",transactions[i].transactiondate);
      break;
    }
  }
}

void deletetransaction()
{
  int id;
  printf("Enter the transaction id : ");scanf("%d",&id);
  int i,j;
  for(i=0;i<transactioncount;i++)
  {
    if(transactions[i].transactionID==id)
    {
      break;
    }
  }
  if (transactions[i].transactionID==id)
  {
    for(j=i;j<transactioncount -1 ; j++)
    {
      products[j] = products[j+1];
    }
    transactioncount--;
    printf("Transaction deleted\n");
  }
}

void supplierdetails ()
{
  int  id;
  printf("Enter the id of the supplier : ");scanf("%d",&id);
  for (int i=0;i<suppliercount;i++)
  {
    if (suppliers[i].supplierID == id)
    {
      printf("Supplier ID :%d\n",suppliers[i].supplierID);
      printf("Supplier name :%s\n",suppliers[i].suppliername);
      printf("Supplier address :%s\n",suppliers[i].supplieraddress);
    }
    else printf("Invalid");
  }
}

void addsupplier()
{
  struct supplier newsupplier;
  printf("Enter the supplier id : ");
  scanf("%d",&newsupplier.supplierID);
  printf("Enter the Supplier name :");
  scanf("%s",newsupplier.suppliername);
  printf("Enter the supplier address :");
  scanf("%s",newsupplier.supplieraddress);
  suppliers[suppliercount++]=newsupplier;
  printf ("Your supplier is added\n ");
}
void updatesupplier ()
{
  int id;
  printf("Enter the supplier id : ");scanf("%d",&id);
  int i,j;
  for(int i=0;i<suppliercount;i++)
  {
    if (suppliers[i].supplierID==id)
    {
      printf("Enter the new supplier name : ");
      scanf("%s",suppliers[i].suppliername);
      printf("Enter new supplier address :");
      scanf("%s",&suppliers[i].supplieraddress);
      break;
    }
  }
}

void deletesupplier()
{
  int id;
  printf("Enter the supplier id : ");scanf("%d",&id);
  int i,j;
  for(i=0;i<suppliercount;i++)
  {
    if(suppliers[i].supplierID==id)
    {
      break;
    }
  }
  if (suppliers[i].supplierID==id)
  {
    for(j=i;j<suppliercount -1 ; j++)
    {
      products[j] = products[j+1];
    }
    suppliercount--;
    printf("Product deleted\n");
  }
}

void productdetails()
{
  int  id;
  printf("Enter the id of the product : ");scanf("%d",&id);
  for (int i=0;i<productcount;i++)
  {
    if (products[i].productID == id)
    {
      printf("Product ID :%d\n",products[i].productID);
      printf("Product name :%s\n",products[i].productname);
      printf("Product price :%f\n",products[i].productprice);
      printf("Product quantity :%d\n",products[i].productquantity);
    }
    else printf("invalid");
  }
}
void addproduct ()
{
  struct product newproduct;
  printf("Enter the product id : ");
  scanf("%d",&newproduct.productID);
  printf("Enter the product name :");
  scanf("%s",newproduct.productname);
  printf("Enter the product price :");
  scanf("%f",&newproduct.productprice);
  printf("Enter the product quantity :");
  scanf("%d",&newproduct.productquantity);
  products[productcount++]=newproduct;
  printf ("Your product is added\n ");
}
void updateproduct()
{
  int id;
  printf("Enter the product id : ");scanf("%d",&id);
  int i,j;
  for(int i=0;i<productcount;i++)
  {
    if (products[i].productID==id)
    {
      printf("Enter the new product name : ");
      scanf("%s",products[i].productname);
      printf("Enter new product price :");
      scanf("%f",&products[i].productprice);
      printf("Enter the new product quantity :");
      scanf("%d",&products[i].productquantity);
      break;
    }
  }
}
void deleteproduct()
{
  int id;
  printf("Enter the product id : ");scanf("%d",&id);
  int i,j;
  for(i=0;i<productcount;i++)
  {
    if(products[i].productID==id)
    {
      break;
    }
  }
  if (products[i].productID==id)
  {
    for(j=i;j<productcount -1 ; j++)
    {
      products[j] = products[j+1];
    }
    productcount--;
    printf("Product deleted\n");
  }
}
int main ()
{
  int choice ,t;
  do
  {

    printf("1 : Product\n");
    printf("2 : Suppliers \n");
    printf("3 : Transaction Details\n");
    printf("4 : Exit\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
      case 1:
        printf("1 : Product Details\n");
        printf("2 : Add Product\n");
        printf("3 : Update Product\n");
        printf("4 : Delete Product\n");
        int choice2;
        scanf("%d",&choice2);
        switch (choice2)
        {
          case 1 :
            productdetails();
            break;
          case 2 :
            addproduct();
            break;
          case 3 :
            updateproduct();
            break;
          case 4 :
            deleteproduct();
            break;
          default : 
            printf("Invalid Choice\n");
        }
      break;
      case 2:
        printf("1 : Supplier Details\n");
        printf("2 : Add Supplier\n");
        printf("3 : Update Supplier\n");
        printf("4 : Delete Supplier\n");
        printf("Enter your choice :");
        int choice3;scanf("%d",&choice3);
        switch (choice3)
        {
          case 1 :
            supplierdetails();
            break;
          case 2 :
            addsupplier();
            break;
          case 3 :
            updatesupplier();
            break;
          case 4 :
            deletesupplier();
            break;
          default : 
            printf("Invalid Choice\n");
        }
      break;
      case 3:
        printf("1 : Transaction Details\n");
        printf("2 : Add Transaction\n");
        printf("3 : Update Transaction\n");
        printf("4 : Delete Transaction\n");
        printf("Enter your choice :");
        int choice4;scanf("%d",&choice4);
        switch (choice4)
        {
          case 1 :
            transactiondetails();
            break;
          case 2 :
            addtransaction();
            break;
          case 3 :
            updatetransaction();
            break;
          case 4 :
            deletetransaction();
            break;
          default : 
            printf("Invalid Choice\n");
        }
      break;
      case 4:
        t=5;
        break;
      default : printf("Invalid choice");
    }
  }while (t!=5);
}
