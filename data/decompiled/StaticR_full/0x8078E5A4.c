/* Function at 0x8078E5A4, size=364 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8078E5A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8078E5BC
    r29 = r3;
    r0 = *(0xb1 + r3); // lbz @ 0x8078E5C4
    if (==) goto 0x0x8078e5d8;
    /* li r3, 0 */ // 0x8078E5D0
    /* b 0x8078e6f8 */ // 0x8078E5D4
    r3 = r3 + 0x94; // 0x8078E5D8
    FUN_8078FFE0(r3, r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078e5f0;
    /* li r31, 0 */ // 0x8078E5E8
    /* b 0x8078e6f4 */ // 0x8078E5EC
    r3 = *(0x80 + r29); // lwz @ 0x8078E5F0
    if (!=) goto 0x0x8078e604;
    r31 = r29 + 0x80; // 0x8078E5FC
    /* b 0x8078e6d0 */ // 0x8078E600
    if (==) goto 0x0x8078e610;
    r0 = *(0x90 + r3); // lwz @ 0x8078E608
    /* b 0x8078e614 */ // 0x8078E60C
    /* li r0, -1 */ // 0x8078E610
    *(8 + r1) = r0; // stw @ 0x8078E614
    r3 = *(0x84 + r29); // lwz @ 0x8078E618
    if (!=) goto 0x0x8078e62c;
    r31 = r29 + 0x84; // 0x8078E624
    /* b 0x8078e6d0 */ // 0x8078E628
    if (==) goto 0x0x8078e638;
    r0 = *(0x90 + r3); // lwz @ 0x8078E630
    /* b 0x8078e63c */ // 0x8078E634
    /* li r0, -1 */ // 0x8078E638
    *(0xc + r1) = r0; // stw @ 0x8078E63C
    r3 = *(0x88 + r29); // lwz @ 0x8078E640
    if (!=) goto 0x0x8078e654;
    r31 = r29 + 0x88; // 0x8078E64C
    /* b 0x8078e6d0 */ // 0x8078E650
    if (==) goto 0x0x8078e660;
    r0 = *(0x90 + r3); // lwz @ 0x8078E658
    /* b 0x8078e664 */ // 0x8078E65C
    /* li r0, -1 */ // 0x8078E660
    *(0x10 + r1) = r0; // stw @ 0x8078E664
    r3 = *(0x8c + r29); // lwz @ 0x8078E668
    if (!=) goto 0x0x8078e67c;
    r31 = r29 + 0x8c; // 0x8078E674
    /* b 0x8078e6d0 */ // 0x8078E678
    if (==) goto 0x0x8078e688;
    r0 = *(0x90 + r3); // lwz @ 0x8078E680
    /* b 0x8078e68c */ // 0x8078E684
    /* li r0, -1 */ // 0x8078E688
    *(0x14 + r1) = r0; // stw @ 0x8078E68C
    r4 = r30;
    r3 = r29 + 0x94; // 0x8078E694
    /* li r6, 4 */ // 0x8078E69C
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x8078e6b4;
    /* li r31, 0 */ // 0x8078E6AC
    /* b 0x8078e6d0 */ // 0x8078E6B0
    /* slwi r0, r3, 2 */ // 0x8078E6B4
    r31 = r29 + r0; // 0x8078E6B8
    r3 = *(0x80 + r31); // lwzu @ 0x8078E6BC
    if (==) goto 0x0x8078e6d0;
    /* li r4, 0 */ // 0x8078E6C8
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x8078e6f0;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078E6E4
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8078e6f4 */ // 0x8078E6EC
    /* li r31, 0 */ // 0x8078E6F0
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8078E6F8
    r31 = *(0x2c + r1); // lwz @ 0x8078E6FC
    r30 = *(0x28 + r1); // lwz @ 0x8078E700
    r29 = *(0x24 + r1); // lwz @ 0x8078E704
}