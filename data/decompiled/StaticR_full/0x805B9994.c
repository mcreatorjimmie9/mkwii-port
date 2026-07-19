/* Function at 0x805B9994, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_805B9994(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B99A0
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x805B99A8
    if (!=) goto 0x0x805b9a18;
    /* li r4, 0 */ // 0x805B99B4
    r3 = r3 + 0x28; // 0x805B99B8
    FUN_805DEE08(r4, r3); // bl 0x805DEE08
    if (==) goto 0x0x805b9a18;
    r3 = r31 + 0x10; // 0x805B99C8
    FUN_805DFE80(r3, r3); // bl 0x805DFE80
    FUN_805DF0E4(r3); // bl 0x805DF0E4
    *(0x20 + r31) = r3; // stw @ 0x805B99D4
    /* li r0, 0 */ // 0x805B99D8
    r3 = *(0x1c + r31); // lwz @ 0x805B99DC
    *(0x24 + r31) = r0; // stw @ 0x805B99E0
    FUN_805DF19C(); // bl 0x805DF19C
    r0 = *(0xa8 + r31); // lwz @ 0x805B99E8
    /* lis r4, 0 */ // 0x805B99EC
    r4 = r4 + 0; // 0x805B99F0
    r3 = *(0x24 + r31); // lwz @ 0x805B99F4
    /* slwi r0, r0, 2 */ // 0x805B99F8
    /* li r5, 0 */ // 0x805B99FC
    /* lwzx r4, r4, r0 */ // 0x805B9A00
    FUN_805DF4C0(r4, r5); // bl 0x805DF4C0
    if (==) goto 0x0x805b9a18;
    /* li r0, 1 */ // 0x805B9A10
    *(0xac + r31) = r0; // stw @ 0x805B9A14
    r0 = *(0x14 + r1); // lwz @ 0x805B9A18
    r31 = *(0xc + r1); // lwz @ 0x805B9A1C
    return;
}