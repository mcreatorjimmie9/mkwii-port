/* Function at 0x8070D934, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_8070D934(int r3, int r4)
{
    r0 = *(0x41 + r3); // lbz @ 0x8070D934
    if (==) goto 0x0x8070d948;
    /* li r3, 1 */ // 0x8070D940
    return;
    /* extsb r0, r4 */ // 0x8070D948
    if (!=) goto 0x0x8070d95c;
    /* li r3, 0 */ // 0x8070D954
    return;
    r3 = *(0x68 + r3); // lwz @ 0x8070D95C
    /* slwi r0, r0, 2 */ // 0x8070D960
    /* lwzx r3, r3, r0 */ // 0x8070D964
    r3 = *(0xf4 + r3); // lbz @ 0x8070D968
    return;
}