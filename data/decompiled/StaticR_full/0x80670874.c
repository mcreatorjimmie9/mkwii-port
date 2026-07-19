/* Function at 0x80670874, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80670874(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80670880
    r27 = r3;
    r0 = *(0xf4 + r3); // lwz @ 0x80670888
    if (<) goto 0x0x806708dc;
    /* li r0, 0 */ // 0x80670894
    /* li r30, 0xa */ // 0x80670898
    r31 = r0 * r30; // 0x8067089C
    /* lis r3, 0x1062 */ // 0x806708A0
    /* lis r29, -0x8000 */ // 0x806708A4
    r28 = r3 + 0x4dd3; // 0x806708A8
    /* b 0x806708d0 */ // 0x806708AC
    r0 = *(0xf8 + r29); // lwz @ 0x806708B0
    /* srwi r0, r0, 2 */ // 0x806708B4
    r0 = r28 * r0; // 0x806708B8
    /* srwi r3, r0, 6 */ // 0x806708BC
    r0 = r3 * r30; // 0x806708C0
    /* mulli r4, r3, 0xa */ // 0x806708C4
    r3 = r0 + r31; // 0x806708C8
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0xac + r27); // lwz @ 0x806708D0
    if (==) goto 0x0x806708b0;
    r0 = *(0x24 + r1); // lwz @ 0x806708E0
    return;
}