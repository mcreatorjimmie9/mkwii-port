/* Function at 0x80634C00, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80634C00(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80634C14
    *(0x14 + r1) = r29; // stw @ 0x80634C18
    r29 = *(0x30 + r3); // lha @ 0x80634C1C
    r3 = *(0x2c + r3); // lwz @ 0x80634C20
    FUN_8061DA88(); // bl 0x8061DA88
}