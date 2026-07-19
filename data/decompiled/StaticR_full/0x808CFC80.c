/* Function at 0x808CFC80, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808CFC80(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* clrlwi r6, r3, 0x18 */ // 0x808CFC88
    /* li r5, 1 */ // 0x808CFC8C
    *(0x14 + r1) = r0; // stw @ 0x808CFC90
    /* li r7, -1 */ // 0x808CFC94
    *(0xc + r1) = r31; // stw @ 0x808CFC98
    /* lis r31, 0 */ // 0x808CFC9C
    r4 = *(0 + r31); // lwz @ 0x808CFCA0
    r0 = *(0x36 + r4); // lha @ 0x808CFCA4
    r3 = r4;
    /* clrlwi r4, r0, 0x18 */ // 0x808CFCAC
    FUN_805D85CC(r3); // bl 0x805D85CC
    r3 = *(0 + r31); // lwz @ 0x808CFCB4
    /* addis r31, r3, 2 */ // 0x808CFCB8
    /* b 0x808cfcc4 */ // 0x808CFCBC
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x5000 + r31); // lbz @ 0x808CFCC4
    if (!=) goto 0x0x808cfcc0;
    /* lis r3, 0 */ // 0x808CFCD0
    r0 = *(0x5004 + r31); // lwz @ 0x808CFCD4
    r4 = *(0 + r3); // lwz @ 0x808CFCD8
    /* li r0, 3 */ // 0x808CFCDC
    /* lis r3, 0 */ // 0x808CFCE0
    *(0xd18 + r4) = r0; // stw @ 0x808CFCE4
    r31 = *(0 + r3); // lwz @ 0x808CFCE8
    r3 = *(0x18 + r31); // lwz @ 0x808CFCEC
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x808cfd04;
    r4 = *(0x18 + r31); // lwz @ 0x808CFCFC
    /* b 0x808cfd08 */ // 0x808CFD00
    /* li r4, 0 */ // 0x808CFD04
    /* lis r31, 0 */ // 0x808CFD08
    r3 = *(0 + r31); // lwz @ 0x808CFD0C
    FUN_805C1484(r4); // bl 0x805C1484
    r4 = *(0 + r31); // lwz @ 0x808CFD14
    /* li r0, -1 */ // 0x808CFD18
    /* li r3, 1 */ // 0x808CFD1C
    *(0x1758 + r4) = r0; // stw @ 0x808CFD20
    r31 = *(0xc + r1); // lwz @ 0x808CFD24
    r0 = *(0x14 + r1); // lwz @ 0x808CFD28
    return;
}