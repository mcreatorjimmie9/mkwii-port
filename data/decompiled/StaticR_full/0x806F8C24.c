/* Function at 0x806F8C24, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806F8C24(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x806F8C30
    *(0x1c + r1) = r31; // stw @ 0x806F8C34
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806F8C3C
    r30 = r3;
    *(0xc + r1) = r0; // stw @ 0x806F8C44
    *(0 + r5) = r0; // stw @ 0x806F8C48
    r0 = *(0x41f4 + r3); // lwz @ 0x806F8C4C
    if (!=) goto 0x0x806f8cb0;
    FUN_806F8D5C(r5); // bl 0x806F8D5C
    if (==) goto 0x0x806f8cb0;
    r0 = *(8 + r1); // lwz @ 0x806F8C68
    /* slwi r0, r0, 1 */ // 0x806F8C70
    r3 = r30 + r0; // 0x806F8C74
    r3 = r3 + 0x310; // 0x806F8C78
    FUN_806F9FA4(r4, r3); // bl 0x806F9FA4
    if (==) goto 0x0x806f8ca8;
    r0 = *(0xc + r1); // lwz @ 0x806F8C88
    if (>) goto 0x0x806f8ca0;
    *(0 + r31) = r0; // stw @ 0x806F8C94
    /* li r3, 1 */ // 0x806F8C98
    /* b 0x806f8cb4 */ // 0x806F8C9C
    /* li r3, 0 */ // 0x806F8CA0
    /* b 0x806f8cb4 */ // 0x806F8CA4
    /* li r3, 0 */ // 0x806F8CA8
    /* b 0x806f8cb4 */ // 0x806F8CAC
    /* li r3, 0 */ // 0x806F8CB0
    r0 = *(0x24 + r1); // lwz @ 0x806F8CB4
    r31 = *(0x1c + r1); // lwz @ 0x806F8CB8
    r30 = *(0x18 + r1); // lwz @ 0x806F8CBC
    return;
}