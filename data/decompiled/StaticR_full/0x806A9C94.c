/* Function at 0x806A9C94, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806A9C94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A9CA0
    r31 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x806A9CA8
    if (==) goto 0x0x806a9cc0;
    if (==) goto 0x0x806a9ce0;
    /* b 0x806a9cfc */ // 0x806A9CBC
    /* li r0, 0 */ // 0x806A9CC0
    *(0xa34 + r3) = r0; // stw @ 0x806A9CC4
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806A9CD4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806a9cfc */ // 0x806A9CDC
    /* li r0, 1 */ // 0x806A9CE0
    *(0xa34 + r3) = r0; // stw @ 0x806A9CE4
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x806A9CF4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806A9CFC
    r31 = *(0xc + r1); // lwz @ 0x806A9D00
    return;
}