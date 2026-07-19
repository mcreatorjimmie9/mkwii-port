/* Function at 0x807BE958, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807BE958(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807BE96C
    /* lis r30, 0 */ // 0x807BE970
    r30 = r30 + 0; // 0x807BE974
    r4 = *(0x198 + r3); // lwz @ 0x807BE978
    r3 = *(0 + r4); // lwz @ 0x807BE97C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BE984
    /* clrlwi r0, r3, 0x18 */ // 0x807BE988
    r3 = *(0 + r4); // lwz @ 0x807BE98C
    /* mulli r0, r0, 0x248 */ // 0x807BE990
    /* li r5, 0 */ // 0x807BE994
    r4 = *(0x14 + r3); // lwz @ 0x807BE998
    /* li r3, 0 */ // 0x807BE99C
    r4 = r4 + r0; // 0x807BE9A0
    r0 = *(0xc8 + r4); // lwz @ 0x807BE9A4
    if (==) goto 0x0x807be9c0;
    r0 = *(0x208 + r4); // lbz @ 0x807BE9B0
    if (!=) goto 0x0x807be9c0;
    /* li r3, 1 */ // 0x807BE9BC
    if (==) goto 0x0x807be9cc;
    r5 = *(0x104 + r4); // lwz @ 0x807BE9C8
    if (!=) goto 0x0x807be9f4;
    /* lis r3, 0 */ // 0x807BE9D4
    r4 = *(6 + r30); // lha @ 0x807BE9D8
    r3 = *(0 + r3); // lwz @ 0x807BE9DC
    FUN_807C03BC(r3); // bl 0x807C03BC
    r0 = *(4 + r30); // lha @ 0x807BE9E4
    r0 = r0 + r3; // 0x807BE9E8
    *(0x1a8 + r31) = r0; // stw @ 0x807BE9EC
    /* b 0x807bea10 */ // 0x807BE9F0
    /* lis r3, 0 */ // 0x807BE9F4
    r4 = *(0xa + r30); // lha @ 0x807BE9F8
    r3 = *(0 + r3); // lwz @ 0x807BE9FC
    FUN_807C03BC(r3); // bl 0x807C03BC
    r0 = *(8 + r30); // lha @ 0x807BEA04
    r0 = r0 + r3; // 0x807BEA08
    *(0x1a8 + r31) = r0; // stw @ 0x807BEA0C
    r0 = *(0x14 + r1); // lwz @ 0x807BEA10
    r31 = *(0xc + r1); // lwz @ 0x807BEA14
    r30 = *(8 + r1); // lwz @ 0x807BEA18
    return;
}