/* Function at 0x807BE108, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807BE108(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807BE118
    r30 = r3;
    r4 = *(0x198 + r3); // lwz @ 0x807BE120
    r3 = *(0 + r4); // lwz @ 0x807BE124
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BE12C
    /* clrlwi r0, r3, 0x18 */ // 0x807BE130
    r3 = *(0 + r4); // lwz @ 0x807BE134
    /* mulli r0, r0, 0x248 */ // 0x807BE138
    r3 = *(0x14 + r3); // lwz @ 0x807BE13C
    r3 = r3 + r0; // 0x807BE140
    r31 = *(0x8c + r3); // lwz @ 0x807BE144
    if (==) goto 0x0x807be158;
    /* li r0, 1 */ // 0x807BE150
    /* b 0x807be15c */ // 0x807BE154
    /* li r0, 0 */ // 0x807BE158
    if (!=) goto 0x0x807be174;
    r3 = r30;
    r4 = r30 + 0x38; // 0x807BE168
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807be1b8 */ // 0x807BE170
    r0 = *(0x1a0 + r30); // lbz @ 0x807BE174
    if (==) goto 0x0x807be1b8;
    r3 = *(0x198 + r30); // lwz @ 0x807BE180
    /* li r4, 4 */ // 0x807BE184
    FUN_807BB884(r4); // bl 0x807BB884
    /* li r0, 0 */ // 0x807BE190
    if (==) goto 0x0x807be1a0;
    if (!=) goto 0x0x807be1a4;
    /* li r0, 1 */ // 0x807BE1A0
    if (!=) goto 0x0x807be1b8;
    r3 = r30;
    r4 = r30 + 0x38; // 0x807BE1B0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BE1B8
    r31 = *(0xc + r1); // lwz @ 0x807BE1BC
    r30 = *(8 + r1); // lwz @ 0x807BE1C0
    return;
}