/* Function at 0x8064DF10, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8064DF10(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8064DF20
    *(0x18 + r1) = r30; // stw @ 0x8064DF24
    /* li r30, 0 */ // 0x8064DF28
    *(0x14 + r1) = r29; // stw @ 0x8064DF2C
    r29 = r3;
    /* b 0x8064df4c */ // 0x8064DF34
    r3 = *(0 + r29); // lwz @ 0x8064DF38
    /* lwzx r3, r3, r31 */ // 0x8064DF3C
    FUN_8069FC7C(); // bl 0x8069FC7C
    r31 = r31 + 4; // 0x8064DF44
    r30 = r30 + 1; // 0x8064DF48
    r0 = *(0x10 + r29); // lwz @ 0x8064DF4C
    if (<) goto 0x0x8064df38;
    r0 = *(0x24 + r1); // lwz @ 0x8064DF58
    r31 = *(0x1c + r1); // lwz @ 0x8064DF5C
    r30 = *(0x18 + r1); // lwz @ 0x8064DF60
    r29 = *(0x14 + r1); // lwz @ 0x8064DF64
    return;
}