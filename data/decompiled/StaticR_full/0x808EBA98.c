/* Function at 0x808EBA98, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808EBA98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x3c + r1) = r31; // stw @ 0x808EBAA8
    *(0x38 + r1) = r30; // stw @ 0x808EBAAC
    r30 = r3;
    if (!=) goto 0x0x808ebb00;
    r4 = *(0x654 + r3); // lwz @ 0x808EBAB8
    r5 = r3 + 0x6c8; // 0x808EBABC
    /* li r6, 0 */ // 0x808EBAC0
    r0 = r4 + 1; // 0x808EBAC4
    *(0x654 + r3) = r0; // stw @ 0x808EBAC8
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x808EBAD0
    r3 = r30 + 0x6c8; // 0x808EBAD4
    r4 = r4 + 0; // 0x808EBAD8
    r5 = r4 + 0xf; // 0x808EBADC
    r6 = r4 + 0x24; // 0x808EBAE0
    FUN_8066CF50(r4, r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x6c8; // 0x808EBAE8
    /* li r4, 0 */ // 0x808EBAEC
    /* li r5, 0 */ // 0x808EBAF0
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x6c8; // 0x808EBAF8
    /* b 0x808ebb80 */ // 0x808EBAFC
    /* li r3, 0x174 */ // 0x808EBB00
    FUN_805E3430(r5, r3, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808ebb1c;
    FUN_806A0418(r3); // bl 0x806A0418
    r31 = r3;
    r4 = *(0x654 + r30); // lwz @ 0x808EBB1C
}