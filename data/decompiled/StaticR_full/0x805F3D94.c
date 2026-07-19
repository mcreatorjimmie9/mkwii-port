/* Function at 0x805F3D94, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805F3D94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* mulli r0, r5, 0xc */ // 0x805F3DA0
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805F3DAC
    *(0x14 + r1) = r29; // stw @ 0x805F3DB0
    /* li r29, 0 */ // 0x805F3DB4
    *(0x10 + r1) = r28; // stw @ 0x805F3DB8
    r28 = r3;
    r6 = *(0x3c + r3); // lwz @ 0x805F3DC0
    r3 = *(0 + r6); // lwz @ 0x805F3DC4
    r30 = r3 + r0; // 0x805F3DC8
    r4 = *(0x14 + r31); // lwz @ 0x805F3DCC
    r3 = *(0x30 + r28); // lwz @ 0x805F3DD0
    r4 = *(0 + r4); // lwz @ 0x805F3DD4
    r5 = *(0 + r30); // lbz @ 0x805F3DD8
    r6 = *(2 + r30); // lbz @ 0x805F3DDC
    FUN_805E3430(); // bl 0x805E3430
}