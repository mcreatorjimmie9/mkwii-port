/* Function at 0x8061B638, size=164 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r21 */
/* Calls: 2 function(s) */

int FUN_8061B638(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r21 */
    /* stmw r21, 0x24(r1) */ // 0x8061B644
    r21 = r3;
    r29 = *(0x58 + r1); // lwz @ 0x8061B64C
    r22 = r4;
    r30 = *(0x5c + r1); // lwz @ 0x8061B654
    r23 = r5;
    r31 = *(0x60 + r1); // lwz @ 0x8061B65C
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r28 = r10;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x8061B678
    /* li r0, 0 */ // 0x8061B67C
    r3 = r3 + 0; // 0x8061B680
    *(0xc + r21) = r3; // stw @ 0x8061B684
    /* li r3, 0x3c */ // 0x8061B688
    *(0x1c + r21) = r0; // stw @ 0x8061B68C
    *(0x20 + r21) = r0; // stw @ 0x8061B690
    *(0x24 + r21) = r0; // stw @ 0x8061B694
    *(0x28 + r21) = r0; // stw @ 0x8061B698
    *(0x2c + r21) = r0; // stw @ 0x8061B69C
    *(0x30 + r21) = r0; // stw @ 0x8061B6A0
    *(0x34 + r21) = r0; // stw @ 0x8061B6A4
    *(0x38 + r21) = r0; // stw @ 0x8061B6A8
    *(0x40 + r21) = r0; // stw @ 0x8061B6AC
    *(0x44 + r21) = r0; // stw @ 0x8061B6B0
    *(0x58 + r21) = r0; // stw @ 0x8061B6B4
    *(0x5c + r21) = r0; // stw @ 0x8061B6B8
    *(0x60 + r21) = r0; // stw @ 0x8061B6BC
    *(0x64 + r21) = r0; // stw @ 0x8061B6C0
    *(0x68 + r21) = r0; // stw @ 0x8061B6C4
    *(0x6c + r21) = r0; // stw @ 0x8061B6C8
    *(0x70 + r21) = r0; // stw @ 0x8061B6CC
    *(0x74 + r21) = r0; // stw @ 0x8061B6D0
    *(0x7c + r21) = r0; // stw @ 0x8061B6D4
    FUN_805E3430(); // bl 0x805E3430
}