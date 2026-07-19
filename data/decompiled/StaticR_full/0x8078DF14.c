/* Function at 0x8078DF14, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_8078DF14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8078DF20
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = r3 + 0x94; // 0x8078DF38
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078df50;
    /* li r3, 0x80 */ // 0x8078DF48
    /* b 0x8078df7c */ // 0x8078DF4C
    r0 = *(0xb1 + r27); // lbz @ 0x8078DF50
    if (==) goto 0x0x8078df64;
    /* li r3, 0x80 */ // 0x8078DF5C
    /* b 0x8078df7c */ // 0x8078DF60
    r3 = r27;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    r7 = r31;
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8078DF80
    return;
}