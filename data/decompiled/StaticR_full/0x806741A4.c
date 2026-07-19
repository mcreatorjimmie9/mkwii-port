/* Function at 0x806741A4, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_806741A4(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r4, 0x1062 */ // 0x806741AC
    *(0x34 + r1) = r0; // stw @ 0x806741B0
    /* li r0, 0 */ // 0x806741B4
    /* stmw r25, 0x14(r1) */ // 0x806741B8
    /* li r30, 0xa */ // 0x806741BC
    r31 = r0 * r30; // 0x806741C0
    r25 = r3;
    r28 = r4 + 0x4dd3; // 0x806741C8
    /* lis r26, 0 */ // 0x806741CC
    /* li r27, 3 */ // 0x806741D0
    /* lis r29, -0x8000 */ // 0x806741D4
    /* b 0x80674228 */ // 0x806741D8
    r3 = r25;
    FUN_806742C0(r3); // bl 0x806742C0
    r0 = *(0xbe8 + r25); // lwz @ 0x806741E4
    if (!=) goto 0x0x80674208;
    r3 = *(0 + r26); // lwz @ 0x806741F0
    r3 = r3 + 0x34; // 0x806741F4
    FUN_8067FCB8(r3); // bl 0x8067FCB8
    if (!=) goto 0x0x80674208;
    *(0xbe8 + r25) = r27; // stw @ 0x80674204
    r0 = *(0xf8 + r29); // lwz @ 0x80674208
    /* srwi r0, r0, 2 */ // 0x8067420C
    r0 = r28 * r0; // 0x80674210
    /* srwi r3, r0, 6 */ // 0x80674214
    r0 = r3 * r30; // 0x80674218
    /* mulli r4, r3, 0xa */ // 0x8067421C
    r3 = r0 + r31; // 0x80674220
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0xbe8 + r25); // lwz @ 0x80674228
    if (!=) goto 0x0x806741dc;
    r0 = *(0x34 + r1); // lwz @ 0x80674238
    return;
}