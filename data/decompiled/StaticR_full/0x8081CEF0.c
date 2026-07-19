/* Function at 0x8081CEF0, size=80 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8081CEF0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r29, 0 */ // 0x8081CF08
    r29 = r29 + 0; // 0x8081CF0C
    *(0x20 + r1) = r28; // stw @ 0x8081CF10
    r28 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    r30 = r3;
    r3 = r28;
    FUN_80842DCC(r3); // bl 0x80842DCC
    if (==) goto 0x0x8081cf70;
    r3 = r28;
    FUN_8061E4E8(r3, r4); // bl 0x8061E4E8
}