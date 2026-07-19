/* Function at 0x808E7818, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808E7818(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808E782C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E7834
    r29 = r3;
    if (!=) goto 0x0x808e7848;
    r31 = r3 + 0x844; // 0x808E7840
    /* b 0x808e784c */ // 0x808E7844
    r31 = r3 + 0xa98; // 0x808E7848
    r4 = *(0x654 + r29); // lwz @ 0x808E784C
    r3 = r29;
    r5 = r31;
    /* li r6, 0 */ // 0x808E7858
    r0 = r4 + 1; // 0x808E785C
    *(0x654 + r29) = r0; // stw @ 0x808E7860
    FUN_80671C2C(r3, r5, r6); // bl 0x80671C2C
    /* lis r3, 0 */ // 0x808E7868
    /* lis r5, 0 */ // 0x808E786C
    /* slwi r0, r30, 2 */ // 0x808E7870
    r7 = *(0x6bc + r29); // lwz @ 0x808E7874
    r3 = r3 + 0; // 0x808E7878
    r5 = r5 + 0; // 0x808E787C
    /* lwzx r6, r3, r0 */ // 0x808E7880
    r4 = r5 + 0x20; // 0x808E7884
    r3 = r31;
    r5 = r5 + 0x27; // 0x808E788C
    /* li r8, 0 */ // 0x808E7890
    /* li r9, 0 */ // 0x808E7894
    FUN_80649914(r4, r3, r5, r8, r9); // bl 0x80649914
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808E78A0
    r30 = *(0x18 + r1); // lwz @ 0x808E78A4
    r29 = *(0x14 + r1); // lwz @ 0x808E78A8
    r0 = *(0x24 + r1); // lwz @ 0x808E78AC
    return;
}