/* Function at 0x805E39D8, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805E39D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805E39E8
    *(0x18 + r1) = r30; // stw @ 0x805E39EC
    /* li r30, 0 */ // 0x805E39F0
    *(0x14 + r1) = r29; // stw @ 0x805E39F4
    r29 = r4;
    /* b 0x805e3a2c */ // 0x805E39FC
    /* clrlwi r4, r30, 0x10 */ // 0x805E3A00
    FUN_805A3D74(); // bl 0x805A3D74
    r4 = *(0 + r3); // lwz @ 0x805E3A08
    r0 = *(0 + r4); // lhz @ 0x805E3A0C
    if (!=) goto 0x0x805e3a28;
    r0 = *(0x2e + r4); // lha @ 0x805E3A18
    if (!=) goto 0x0x805e3a28;
    /* b 0x805e3a58 */ // 0x805E3A24
    r30 = r30 + 1; // 0x805E3A28
    r3 = *(0 + r31); // lwz @ 0x805E3A2C
    /* clrlwi r5, r30, 0x10 */ // 0x805E3A30
    r4 = *(0x28 + r3); // lwz @ 0x805E3A34
    if (!=) goto 0x0x805e3a48;
    /* li r0, 0 */ // 0x805E3A40
    /* b 0x805e3a4c */ // 0x805E3A44
    r0 = *(4 + r4); // lhz @ 0x805E3A48
    if (<) goto 0x0x805e3a00;
    /* li r3, 0 */ // 0x805E3A54
    r0 = *(0x24 + r1); // lwz @ 0x805E3A58
    r31 = *(0x1c + r1); // lwz @ 0x805E3A5C
    r30 = *(0x18 + r1); // lwz @ 0x805E3A60
    r29 = *(0x14 + r1); // lwz @ 0x805E3A64
    return;
}