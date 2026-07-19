/* Function at 0x806D42F8, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806D42F8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x806D4308
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806D4314
    /* lis r5, 0 */ // 0x806D4318
    r4 = r4 + 0; // 0x806D431C
    *(0 + r30) = r4; // stw @ 0x806D4320
    /* lis r3, 0 */ // 0x806D4324
    r5 = r5 + 0; // 0x806D4328
    r10 = *(0 + r3); // lwzu @ 0x806D432C
    /* lis r4, 0 */ // 0x806D4330
    /* lis r7, 0 */ // 0x806D4334
    *(0x14 + r1) = r10; // stw @ 0x806D4338
    r9 = *(4 + r3); // lwz @ 0x806D433C
    r4 = r4 + 0; // 0x806D4340
    r8 = *(8 + r3); // lwz @ 0x806D4344
    r3 = r30 + 0x6c; // 0x806D4348
    *(0x54 + r30) = r8; // stw @ 0x806D434C
    *(0x44 + r30) = r5; // stw @ 0x806D4350
    *(0x48 + r30) = r30; // stw @ 0x806D4354
    *(0x4c + r30) = r10; // stw @ 0x806D4358
    *(0x50 + r30) = r9; // stw @ 0x806D435C
    r6 = *(0 + r7); // lwzu @ 0x806D4360
    *(0x18 + r1) = r9; // stw @ 0x806D4364
    r5 = *(4 + r7); // lwz @ 0x806D4368
    r0 = *(8 + r7); // lwz @ 0x806D436C
    *(0x1c + r1) = r8; // stw @ 0x806D4370
    *(8 + r1) = r6; // stw @ 0x806D4374
    *(0xc + r1) = r5; // stw @ 0x806D4378
    *(0x10 + r1) = r0; // stw @ 0x806D437C
    *(0x58 + r30) = r4; // stw @ 0x806D4380
    *(0x5c + r30) = r30; // stw @ 0x806D4384
    *(0x60 + r30) = r6; // stw @ 0x806D4388
    *(0x64 + r30) = r5; // stw @ 0x806D438C
    *(0x68 + r30) = r0; // stw @ 0x806D4390
    FUN_80669F74(); // bl 0x80669F74
    r31 = r30 + 0x290; // 0x806D4398
    r3 = r31;
    FUN_806497A4(r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806D43A4
    /* lis r5, 0 */ // 0x806D43A8
    /* lfs f0, 0(r3) */ // 0x806D43AC
    r5 = r5 + 0; // 0x806D43B0
    /* li r4, 0x7d1 */ // 0x806D43B4
    /* li r0, 0 */ // 0x806D43B8
    *(0 + r31) = r5; // stw @ 0x806D43BC
    r3 = r30 + 0x4f4; // 0x806D43C0
    *(0x254 + r31) = r4; // stw @ 0x806D43C4
    *(0x258 + r31) = r0; // stw @ 0x806D43C8
    /* stfs f0, 0x25c(r31) */ // 0x806D43CC
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806D43D4
    /* lis r5, 0 */ // 0x806D43D8
    r3 = r30 + 0x668; // 0x806D43DC
    /* li r6, 0x17c */ // 0x806D43E0
    r4 = r4 + 0; // 0x806D43E4
    r5 = r5 + 0; // 0x806D43E8
    /* li r7, 0xa */ // 0x806D43EC
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}