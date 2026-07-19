/* Function at 0x80651914, size=228 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80651914(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xd8 + r1) = r30; // stw @ 0x80651924
    r30 = r3;
    r0 = *(0x1920 + r3); // lwz @ 0x8065192C
    if (!=) goto 0x0x806519e0;
    r5 = *(0x1918 + r3); // lwz @ 0x80651938
    r4 = *(0x1914 + r3); // lwz @ 0x8065193C
    r5 = r5 + 1; // 0x80651940
    *(0x1918 + r3) = r5; // stw @ 0x80651944
    r0 = *(0x260 + r4); // lwz @ 0x80651948
    if (<) goto 0x0x8065195c;
    /* li r0, 0 */ // 0x80651954
    *(0x1918 + r3) = r0; // stw @ 0x80651958
    r3 = *(0x1880 + r3); // lwz @ 0x8065195C
    /* li r4, 1 */ // 0x80651960
    FUN_80661064(r4); // bl 0x80661064
    r4 = *(0x1880 + r30); // lwz @ 0x80651968
    r0 = *(0x1884 + r30); // lwz @ 0x8065196C
    *(0x1880 + r30) = r0; // stw @ 0x80651970
    r3 = *(0x1914 + r30); // lwz @ 0x80651974
    *(0x1884 + r30) = r4; // stw @ 0x80651978
    r4 = *(0x1918 + r30); // lwz @ 0x8065197C
    FUN_806607EC(); // bl 0x806607EC
    r31 = r3;
    r3 = *(0x1914 + r30); // lwz @ 0x80651988
    r4 = *(0x1918 + r30); // lwz @ 0x8065198C
    FUN_806607C4(); // bl 0x806607C4
    r4 = r3;
    r3 = *(0x1880 + r30); // lwz @ 0x80651998
    r5 = r31;
    /* li r6, 1 */ // 0x806519A0
    FUN_80661004(r4, r5, r6); // bl 0x80661004
    FUN_80654ECC(r5, r6, r3); // bl 0x80654ECC
    r6 = *(0x1918 + r30); // lwz @ 0x806519B0
    r3 = r30 + 0xb88; // 0x806519B4
    /* li r4, 0x7d9 */ // 0x806519BC
    r0 = r6 + 1; // 0x806519C0
    *(8 + r1) = r0; // stw @ 0x806519C4
    r6 = *(0x1914 + r30); // lwz @ 0x806519C8
    r0 = *(0x260 + r6); // lwz @ 0x806519CC
    *(0xc + r1) = r0; // stw @ 0x806519D0
    FUN_806A0A34(); // bl 0x806A0A34
    /* li r0, 1 */ // 0x806519D8
    *(0x1920 + r30) = r0; // stw @ 0x806519DC
    r0 = *(0xe4 + r1); // lwz @ 0x806519E0
    r31 = *(0xdc + r1); // lwz @ 0x806519E4
    r30 = *(0xd8 + r1); // lwz @ 0x806519E8
    return;
}