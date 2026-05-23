#include <stdio.h>

/* passing a copy of the entire structure */

struct stores {
    char name[20];
    float price;
    int quantity;
};

struct stores update(struct stores product, float p, int q);
float mul(struct stores stock);

int main() {

    float p_increment, value;
    int q_increment;

    struct stores item = {"XYZ", 25.75, 12};

    printf("\nInput increment values:\n");
    printf("Price increment and quantity increment:\n");

    scanf("%f %d", &p_increment, &q_increment);

    /* update structure values */
    item = update(item, p_increment, q_increment);

    printf("\nUpdated values of item\n\n");

    printf("Name      : %s\n", item.name);
    printf("Price     : %.2f\n", item.price);
    printf("Quantity  : %d\n", item.quantity);

    /* calculate total value */
    value = mul(item);

    printf("\nValue of the item = %.2f\n", value);

    return 0;
}

/* function definition */

struct stores update(struct stores product, float p, int q)
{
    product.price += p;
    product.quantity += q;

    return product;
}

float mul(struct stores stock)
{
    return (stock.price * stock.quantity);
}