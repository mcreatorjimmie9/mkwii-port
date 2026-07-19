/* Function at 0x8064E168, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8064E168(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8064E178
    *(0x18 + r1) = r30; // stw @ 0x8064E17C
    /* li r30, 0 */ // 0x8064E180
    *(0x14 + r1) = r29; // stw @ 0x8064E184
    r29 = r3;
    /* b 0x8064e1a4 */ // 0x8064E18C
    r3 = *(0 + r29); // lwz @ 0x8064E190
    /* lwzx r3, r3, r31 */ // 0x8064E194
    FUN_806A004C(); // bl 0x806A004C
    r31 = r31 + 4; // 0x8064E19C
    r30 = r30 + 1; // 0x8064E1A0
    r0 = *(0x10 + r29); // lwz @ 0x8064E1A4
    if (<) goto 0x0x8064e190;
    r0 = *(0x24 + r1); // lwz @ 0x8064E1B0
    r31 = *(0x1c + r1); // lwz @ 0x8064E1B4
    r30 = *(0x18 + r1); // lwz @ 0x8064E1B8
    r29 = *(0x14 + r1); // lwz @ 0x8064E1BC
    return;
}