/* Function at 0x806A120C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A120C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0xa8; // 0x806A1214
    *(0x14 + r1) = r0; // stw @ 0x806A1218
    *(0xc + r1) = r31; // stw @ 0x806A121C
    r31 = r5;
    FUN_80666A9C(r3); // bl 0x80666A9C
    r4 = r31;
    FUN_8066EEF4(r4); // bl 0x8066EEF4
    r0 = *(0x14 + r1); // lwz @ 0x806A1230
    r31 = *(0xc + r1); // lwz @ 0x806A1234
    return;
}