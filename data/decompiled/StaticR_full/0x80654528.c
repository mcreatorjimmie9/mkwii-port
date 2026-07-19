/* Function at 0x80654528, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_80654528(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80654534
    r31 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r4 = *(0x220 + r31); // lwz @ 0x80654540
    r0 = r31 + 0x1e4; // 0x80654544
    /* li r5, 0 */ // 0x80654548
    r3 = *(0x54 + r4); // lwz @ 0x8065454C
    if (!=) goto 0x0x80654560;
    /* li r5, 1 */ // 0x80654558
    /* b 0x806545ac */ // 0x8065455C
    r3 = *(0xb0 + r4); // lwz @ 0x80654560
    if (!=) goto 0x0x80654574;
    /* li r5, 1 */ // 0x8065456C
    /* b 0x806545ac */ // 0x80654570
    r3 = *(0x10c + r4); // lwz @ 0x80654574
    if (!=) goto 0x0x80654588;
    /* li r5, 1 */ // 0x80654580
    /* b 0x806545ac */ // 0x80654584
    r3 = *(0x168 + r4); // lwz @ 0x80654588
    if (!=) goto 0x0x8065459c;
    /* li r5, 1 */ // 0x80654594
    /* b 0x806545ac */ // 0x80654598
    r3 = *(0x1c4 + r4); // lwz @ 0x8065459C
    if (!=) goto 0x0x806545ac;
    /* li r5, 1 */ // 0x806545A8
    if (==) goto 0x0x806545d4;
    r3 = r31 + 0x98; // 0x806545B4
    /* li r4, 1 */ // 0x806545B8
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806545C0
    /* li r4, 2 */ // 0x806545C4
    /* lfs f1, 0(r5) */ // 0x806545C8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x806545f0 */ // 0x806545D0
    r3 = r31 + 0x98; // 0x806545D4
    /* li r4, 1 */ // 0x806545D8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806545E0
    /* li r4, 0 */ // 0x806545E4
    /* lfs f1, 0(r5) */ // 0x806545E8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31 + 0x98; // 0x806545F0
    /* li r4, 0 */ // 0x806545F4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806545FC
    /* li r4, 0 */ // 0x80654600
    /* lfs f1, 0(r5) */ // 0x80654604
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    r4 = *(0x1d8 + r31); // lwz @ 0x8065460C
    r3 = r31 + 0x1e4; // 0x80654610
    FUN_806692E0(r4, r3); // bl 0x806692E0
    r0 = *(0x14 + r1); // lwz @ 0x80654618
    r31 = *(0xc + r1); // lwz @ 0x8065461C
    return;
}