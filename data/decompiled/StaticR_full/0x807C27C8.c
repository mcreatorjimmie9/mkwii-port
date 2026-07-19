/* Function at 0x807C27C8, size=184 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_807C27C8(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x70 + r1) = r28; // stw @ 0x807C27E4
    r28 = r3;
    /* lfs f0, 0x30(r3) */ // 0x807C27EC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C27F0
    if (>=) goto 0x0x807c2800;
    /* li r3, 1 */ // 0x807C27F8
    /* b 0x807c297c */ // 0x807C27FC
    r30 = *(0x14 + r3); // lwz @ 0x807C2800
    /* li r31, 0 */ // 0x807C2808
    r4 = r30;
    FUN_807D9E88(r3, r4); // bl 0x807D9E88
    r4 = r30;
    FUN_807D9DE0(r4, r4, r3); // bl 0x807D9DE0
    r4 = r30;
    FUN_807D9E34(r4, r3, r4, r3); // bl 0x807D9E34
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    r4 = r30;
    FUN_807D9D8C(r4, r5, r4, r3); // bl 0x807D9D8C
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
    r0 = *(0x24 + r28); // lwz @ 0x807C2860
    if (==) goto 0x0x807c2878;
    if (==) goto 0x0x807c2950;
    /* b 0x807c2978 */ // 0x807C2874
    /* lfs f1, 0x38(r1) */ // 0x807C2878
    /* lis r31, 0 */ // 0x807C287C
}