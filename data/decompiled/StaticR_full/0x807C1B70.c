/* Function at 0x807C1B70, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_807C1B70(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807C1B78
    /* lis r4, 0 */ // 0x807C1B7C
    *(0x14 + r1) = r0; // stw @ 0x807C1B80
    /* lis r6, 0 */ // 0x807C1B84
    /* lfs f1, 0(r5) */ // 0x807C1B88
    /* li r5, 0 */ // 0x807C1B8C
    *(0xc + r1) = r31; // stw @ 0x807C1B90
    /* li r0, 2 */ // 0x807C1B94
    /* lfs f0, 0(r4) */ // 0x807C1B98
    r6 = r6 + 0; // 0x807C1B9C
    *(0 + r3) = r6; // stw @ 0x807C1BA0
    r31 = r3;
    *(4 + r3) = r5; // stb @ 0x807C1BA8
    *(8 + r3) = r5; // stw @ 0x807C1BAC
    *(0xc + r3) = r5; // stw @ 0x807C1BB0
    *(0x10 + r3) = r5; // stw @ 0x807C1BB4
    *(0x14 + r3) = r5; // stw @ 0x807C1BB8
    *(0x18 + r3) = r5; // stw @ 0x807C1BBC
    *(0x1c + r3) = r5; // stb @ 0x807C1BC0
    *(0x20 + r3) = r5; // stb @ 0x807C1BC4
    *(0x21 + r3) = r5; // stb @ 0x807C1BC8
    *(0x22 + r3) = r5; // stb @ 0x807C1BCC
    *(0x24 + r3) = r0; // stw @ 0x807C1BD0
    *(0x28 + r3) = r0; // stw @ 0x807C1BD4
    *(0x2c + r3) = r0; // stw @ 0x807C1BD8
    /* stfs f1, 0x30(r3) */ // 0x807C1BDC
    /* stfs f1, 0x34(r3) */ // 0x807C1BE0
    /* stfs f0, 0x38(r3) */ // 0x807C1BE4
    /* stfs f0, 0x3c(r3) */ // 0x807C1BE8
    FUN_807C018C(); // bl 0x807C018C
    if (==) goto 0x0x807c1d30;
    FUN_807C01D8(); // bl 0x807C01D8
    if (==) goto 0x0x807c1c20;
    /* li r3, 0x44 */ // 0x807C1C04
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807c1c18;
    FUN_807DAF1C(r3); // bl 0x807DAF1C
    *(0x14 + r31) = r3; // stw @ 0x807C1C18
    /* b 0x807c1c60 */ // 0x807C1C1C
    FUN_807C01F0(); // bl 0x807C01F0
    if (==) goto 0x0x807c1c48;
    /* li r3, 0x44 */ // 0x807C1C2C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807c1c40;
    FUN_807DBBD0(r3); // bl 0x807DBBD0
    *(0x14 + r31) = r3; // stw @ 0x807C1C40
    /* b 0x807c1c60 */ // 0x807C1C44
    /* li r3, 0x44 */ // 0x807C1C48
    FUN_805E3430(r3); // bl 0x805E3430
}