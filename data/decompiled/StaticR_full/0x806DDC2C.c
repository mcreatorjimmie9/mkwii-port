/* Function at 0x806DDC2C, size=128 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806DDC2C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    *(0xdc + r1) = r31; // stw @ 0x806DDC38
    r31 = r3;
    r4 = *(0x174 + r3); // lwz @ 0x806DDC40
    r0 = r4 + -4; // 0x806DDC44
    if (<=) goto 0x0x806ddc60;
    if (==) goto 0x0x806ddc60;
    if (!=) goto 0x0x806ddc98;
    r0 = *(0x80 + r3); // lbz @ 0x806DDC60
    if (!=) goto 0x0x806ddc98;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r4, 0 */ // 0x806DDC74
    /* li r0, 0 */ // 0x806DDC78
    r4 = r4 + 0; // 0x806DDC7C
    *(0x80 + r1) = r0; // stw @ 0x806DDC80
    r3 = r31;
    r4 = r4 + 0x2cb; // 0x806DDC8C
    /* li r5, 0x17ac */ // 0x806DDC90
    FUN_806A093C(r3, r6, r4, r5); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x806DDC98
    r31 = *(0xdc + r1); // lwz @ 0x806DDC9C
    return;
}