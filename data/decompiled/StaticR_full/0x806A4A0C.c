/* Function at 0x806A4A0C, size=444 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806A4A0C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806A4A28
    *(0x10 + r1) = r28; // stw @ 0x806A4A2C
    r5 = *(0x64 + r3); // lwz @ 0x806A4A30
    r3 = *(0xc + r5); // lwz @ 0x806A4A34
    r28 = *(0x38 + r3); // lwz @ 0x806A4A38
    if (!=) goto 0x0x806a4a4c;
    /* li r28, 0 */ // 0x806A4A44
    /* b 0x806a4aa0 */ // 0x806A4A48
    /* lis r29, 0 */ // 0x806A4A4C
    r29 = r29 + 0; // 0x806A4A50
    if (==) goto 0x0x806a4a9c;
    r12 = *(0 + r28); // lwz @ 0x806A4A58
    r3 = r28;
    r12 = *(8 + r12); // lwz @ 0x806A4A60
    /* mtctr r12 */ // 0x806A4A64
    /* bctrl  */ // 0x806A4A68
    /* b 0x806a4a84 */ // 0x806A4A6C
    if (!=) goto 0x0x806a4a80;
    /* li r0, 1 */ // 0x806A4A78
    /* b 0x806a4a90 */ // 0x806A4A7C
    r3 = *(0 + r3); // lwz @ 0x806A4A80
    if (!=) goto 0x0x806a4a70;
    /* li r0, 0 */ // 0x806A4A8C
    if (==) goto 0x0x806a4a9c;
    /* b 0x806a4aa0 */ // 0x806A4A98
    /* li r28, 0 */ // 0x806A4A9C
    /* li r4, 0 */ // 0x806A4AA0
    r0 = r30 + 0x174; // 0x806A4AA4
    if (==) goto 0x0x806a4ac4;
    r3 = *(0x54 + r28); // lwz @ 0x806A4AB0
    if (!=) goto 0x0x806a4ac4;
    /* li r4, 1 */ // 0x806A4ABC
    /* b 0x806a4b40 */ // 0x806A4AC0
    /* li r3, 1 */ // 0x806A4AC4
    if (==) goto 0x0x806a4ae4;
    r3 = *(0xb0 + r28); // lwz @ 0x806A4AD0
    if (!=) goto 0x0x806a4ae4;
    /* li r4, 1 */ // 0x806A4ADC
    /* b 0x806a4b40 */ // 0x806A4AE0
    /* li r3, 2 */ // 0x806A4AE4
    if (==) goto 0x0x806a4b04;
    r3 = *(0x10c + r28); // lwz @ 0x806A4AF0
    if (!=) goto 0x0x806a4b04;
    /* li r4, 1 */ // 0x806A4AFC
    /* b 0x806a4b40 */ // 0x806A4B00
    /* li r3, 3 */ // 0x806A4B04
    if (==) goto 0x0x806a4b24;
    r3 = *(0x168 + r28); // lwz @ 0x806A4B10
    if (!=) goto 0x0x806a4b24;
    /* li r4, 1 */ // 0x806A4B1C
    /* b 0x806a4b40 */ // 0x806A4B20
    /* li r3, 4 */ // 0x806A4B24
    if (==) goto 0x0x806a4b40;
    r3 = *(0x1c4 + r28); // lwz @ 0x806A4B30
    if (!=) goto 0x0x806a4b40;
    /* li r4, 1 */ // 0x806A4B3C
    if (!=) goto 0x0x806a4bd4;
    r3 = r30 + 0x98; // 0x806A4B48
    /* li r4, 0 */ // 0x806A4B4C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A4B54
    r28 = r3;
    if (==) goto 0x0x806a4b70;
    if (==) goto 0x0x806a4bc4;
    /* b 0x806a4bd4 */ // 0x806A4B6C
    r3 = *(0 + r3); // lwz @ 0x806A4B70
    /* slwi r0, r0, 4 */ // 0x806A4B74
    /* lwzx r3, r3, r0 */ // 0x806A4B78
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A4B80
    /* lis r0, 0x4330 */ // 0x806A4B84
    *(0xc + r1) = r4; // stw @ 0x806A4B88
    /* lis r3, 0 */ // 0x806A4B8C
    /* lfd f3, 0(r3) */ // 0x806A4B90
    /* lis r5, 0 */ // 0x806A4B94
    *(8 + r1) = r0; // stw @ 0x806A4B98
    r3 = r28;
    /* lfs f1, 0x3c(r28) */ // 0x806A4BA0
    /* li r4, 3 */ // 0x806A4BA4
    /* lfd f2, 8(r1) */ // 0x806A4BA8
    /* lfs f0, 0(r5) */ // 0x806A4BAC
    /* fsubs f2, f2, f3 */ // 0x806A4BB0
    /* fdivs f1, f1, f2 */ // 0x806A4BB4
    /* fsubs f1, f0, f1 */ // 0x806A4BB8
    FUN_8069F718(); // bl 0x8069F718
    /* b 0x806a4bd4 */ // 0x806A4BC0
    /* lis r5, 0 */ // 0x806A4BC4
}