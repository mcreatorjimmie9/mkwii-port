/* Function at 0x8089E1E8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8089E1E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8089E1F8
    r31 = r31 + 0; // 0x8089E1FC
    *(8 + r1) = r30; // stw @ 0x8089E200
    r30 = r4;
    FUN_8089E030(); // bl 0x8089E030
    if (==) goto 0x0x8089e228;
    if (==) goto 0x0x8089e230;
    if (==) goto 0x0x8089e238;
    /* b 0x8089e240 */ // 0x8089E224
    r3 = r31 + 0x210; // 0x8089E228
    /* b 0x8089e244 */ // 0x8089E22C
    r3 = r31 + 0x240; // 0x8089E230
    /* b 0x8089e244 */ // 0x8089E234
    r3 = r31 + 0x270; // 0x8089E238
    /* b 0x8089e244 */ // 0x8089E23C
    /* li r3, 0 */ // 0x8089E240
    r0 = r30 rlwinm 2; // rlwinm
    r31 = *(0xc + r1); // lwz @ 0x8089E248
    /* lwzx r3, r3, r0 */ // 0x8089E24C
    r30 = *(8 + r1); // lwz @ 0x8089E250
    r0 = *(0x14 + r1); // lwz @ 0x8089E254
    return;
}