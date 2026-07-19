/* Function at 0x8076D3C8, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8076D3C8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* extsh r4, r4 */ // 0x8076D3D0
    *(0x1c + r1) = r31; // stw @ 0x8076D3D8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8076D3E0
    FUN_8076C7E8(); // bl 0x8076C7E8
    /* lis r3, 0 */ // 0x8076D3E8
    r3 = r3 + 0; // 0x8076D3EC
    *(0 + r31) = r3; // stw @ 0x8076D3F0
    FUN_805ABAFC(r3, r3); // bl 0x805ABAFC
    r3 = *(0xc94 + r3); // lwz @ 0x8076D3F8
    FUN_805E3430(r3, r3); // bl 0x805E3430
}