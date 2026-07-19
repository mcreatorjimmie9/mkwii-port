/* Function at 0x8090AFB4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8090AFB4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8090AFCC
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8090AFD4
    r28 = r3;
    if (==) goto 0x0x8090b084;
    /* li r31, 0 */ // 0x8090AFE0
    /* b 0x8090b004 */ // 0x8090AFE4
    /* clrlwi r0, r31, 0x10 */ // 0x8090AFE8
    r3 = *(0xc + r28); // lwz @ 0x8090AFEC
    /* mulli r0, r0, 0x24 */ // 0x8090AFF0
    r3 = r3 + r0; // 0x8090AFF4
    r3 = *(0x20 + r3); // lwz @ 0x8090AFF8
    FUN_805E3430(); // bl 0x805E3430
    r31 = r31 + 1; // 0x8090B000
    r0 = *(8 + r28); // lhz @ 0x8090B004
    /* clrlwi r3, r31, 0x10 */ // 0x8090B008
    if (<) goto 0x0x8090afe8;
    /* lis r4, 0 */ // 0x8090B014
    r3 = *(0xc + r28); // lwz @ 0x8090B018
    r4 = r4 + 0; // 0x8090B01C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r30, 0 */ // 0x8090B024
    /* b 0x8090b054 */ // 0x8090B028
    r0 = *(4 + r28); // lwz @ 0x8090B02C
    r31 = r30 rlwinm 5; // rlwinm
    r3 = r0 + r31; // 0x8090B034
    r3 = *(0x18 + r3); // lwz @ 0x8090B038
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(4 + r28); // lwz @ 0x8090B040
}