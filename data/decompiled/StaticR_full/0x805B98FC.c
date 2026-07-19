/* Function at 0x805B98FC, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_805B98FC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9908
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B9910
    if (!=) goto 0x0x805b9980;
    /* li r4, 0 */ // 0x805B991C
    r3 = r3 + 0x28; // 0x805B9920
    FUN_805DEE08(r4, r3); // bl 0x805DEE08
    if (==) goto 0x0x805b9980;
    r3 = r31 + 0x10; // 0x805B9930
    FUN_805DFE80(r3, r3); // bl 0x805DFE80
    FUN_805DF0E4(r3); // bl 0x805DF0E4
    *(0x20 + r31) = r3; // stw @ 0x805B993C
    /* li r0, 0 */ // 0x805B9940
    r3 = *(0x1c + r31); // lwz @ 0x805B9944
    *(0x24 + r31) = r0; // stw @ 0x805B9948
    FUN_805DF19C(); // bl 0x805DF19C
    r0 = *(0xa8 + r31); // lwz @ 0x805B9950
    /* lis r4, 0 */ // 0x805B9954
    r4 = r4 + 0; // 0x805B9958
    r3 = *(0x24 + r31); // lwz @ 0x805B995C
    /* slwi r0, r0, 2 */ // 0x805B9960
    /* li r5, 0 */ // 0x805B9964
    /* lwzx r4, r4, r0 */ // 0x805B9968
    FUN_805DF4C0(r4, r5); // bl 0x805DF4C0
    if (==) goto 0x0x805b9980;
    /* li r0, 1 */ // 0x805B9978
    *(0xac + r31) = r0; // stw @ 0x805B997C
    r0 = *(0x14 + r1); // lwz @ 0x805B9980
    r31 = *(0xc + r1); // lwz @ 0x805B9984
    return;
}