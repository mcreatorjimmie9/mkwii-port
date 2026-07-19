/* Function at 0x80685DF4, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80685DF4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x80685E08
    *(0x14 + r1) = r29; // stw @ 0x80685E0C
    r29 = r3;
    r31 = r29;
    /* b 0x80685e2c */ // 0x80685E18
    r3 = *(0x354 + r31); // lwz @ 0x80685E1C
    FUN_80671BE8(); // bl 0x80671BE8
    r31 = r31 + 4; // 0x80685E24
    r30 = r30 + 1; // 0x80685E28
    r0 = *(0x37c + r29); // lwz @ 0x80685E2C
    if (<) goto 0x0x80685e1c;
    r0 = *(0x24 + r1); // lwz @ 0x80685E38
    r31 = *(0x1c + r1); // lwz @ 0x80685E3C
    r30 = *(0x18 + r1); // lwz @ 0x80685E40
    r29 = *(0x14 + r1); // lwz @ 0x80685E44
    return;
}