/* Function at 0x807561D0, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807561D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807561E8
    FUN_808A1BCC(); // bl 0x808A1BCC
    r29 = *(0x10 + r30); // lwz @ 0x807561F0
    r31 = r30 + 0x58; // 0x807561F4
    /* li r30, 0 */ // 0x807561F8
    r3 = *(0x14 + r29); // lwz @ 0x807561FC
    r3 = *(0 + r3); // lwz @ 0x80756200
    if (==) goto 0x0x80756218;
    r5 = r31;
    /* li r4, 0 */ // 0x80756210
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x80756218
    r29 = r29 + 4; // 0x8075621C
    if (<) goto 0x0x807561fc;
    r0 = *(0x24 + r1); // lwz @ 0x80756228
    r31 = *(0x1c + r1); // lwz @ 0x8075622C
    r30 = *(0x18 + r1); // lwz @ 0x80756230
    r29 = *(0x14 + r1); // lwz @ 0x80756234
    return;
}