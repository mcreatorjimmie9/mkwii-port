/* Function at 0x8065BC10, size=124 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8065BC10(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8065BC18
    *(0x5c + r1) = r31; // stw @ 0x8065BC20
    r31 = r4;
    *(0x58 + r1) = r30; // stw @ 0x8065BC28
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x8065BC30
    r3 = *(0 + r3); // lwz @ 0x8065BC34
    r3 = *(0x404 + r3); // lwz @ 0x8065BC38
    FUN_80659814(); // bl 0x80659814
    /* li r0, 0x26 */ // 0x8065BC40
    r4 = r3 + 0x21; // 0x8065BC48
    /* mtctr r0 */ // 0x8065BC4C
    r3 = *(1 + r4); // lbz @ 0x8065BC50
    /* lbzu r0, 2(r4) */ // 0x8065BC54
    *(1 + r5) = r3; // stb @ 0x8065BC58
    /* stbu r0, 2(r5) */ // 0x8065BC5C
    if (counter-- != 0) goto 0x0x8065bc50;
    r4 = r31;
    r3 = r30 + 0x18e0; // 0x8065BC68
    FUN_8066DDCC(r4, r3, r5); // bl 0x8066DDCC
    r0 = *(0x64 + r1); // lwz @ 0x8065BC74
    r31 = *(0x5c + r1); // lwz @ 0x8065BC78
    r30 = *(0x58 + r1); // lwz @ 0x8065BC7C
    return;
}