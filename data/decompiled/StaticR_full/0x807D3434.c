/* Function at 0x807D3434, size=312 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r14 */
/* Calls: 2 function(s) */

int FUN_807D3434(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -192(r1) */
    /* saved r14 */
    /* stmw r14, 0x78(r1) */ // 0x807D3440
    /* lis r31, 0 */ // 0x807D3444
    r30 = r3;
    r31 = r31 + 0; // 0x807D344C
    FUN_807B6C38(); // bl 0x807B6C38
    /* lis r3, 0 */ // 0x807D3454
    /* lis r6, 0 */ // 0x807D3458
    /* li r14, 0 */ // 0x807D345C
    *(0x64 + r30) = r14; // stw @ 0x807D3460
    r3 = r3 + 0; // 0x807D3464
    r6 = r6 + 0; // 0x807D3468
    *(0x34 + r30) = r3; // stw @ 0x807D346C
    /* lis r4, 0 */ // 0x807D3470
    /* li r3, 0xc */ // 0x807D3474
    *(0x60 + r30) = r6; // stw @ 0x807D3478
    r5 = *(0 + r4); // lwzu @ 0x807D347C
    r0 = *(4 + r4); // lwz @ 0x807D3480
    *(0x6c + r30) = r0; // stw @ 0x807D3484
    *(0x68 + r30) = r5; // stw @ 0x807D3488
    r0 = *(8 + r4); // lwz @ 0x807D348C
    *(0x70 + r30) = r0; // stw @ 0x807D3490
    r5 = *(0 + r4); // lwz @ 0x807D3494
    r0 = *(4 + r4); // lwz @ 0x807D3498
    *(0x78 + r30) = r0; // stw @ 0x807D349C
    *(0x74 + r30) = r5; // stw @ 0x807D34A0
    r0 = *(8 + r4); // lwz @ 0x807D34A4
    *(0x7c + r30) = r0; // stw @ 0x807D34A8
    r5 = *(0 + r4); // lwz @ 0x807D34AC
    r0 = *(4 + r4); // lwz @ 0x807D34B0
    *(0x84 + r30) = r0; // stw @ 0x807D34B4
    *(0x80 + r30) = r5; // stw @ 0x807D34B8
    r0 = *(8 + r4); // lwz @ 0x807D34BC
    *(0x88 + r30) = r0; // stw @ 0x807D34C0
    *(0x8c + r30) = r6; // stw @ 0x807D34C4
    *(0x90 + r30) = r14; // stw @ 0x807D34C8
    r5 = *(0 + r4); // lwz @ 0x807D34CC
    r0 = *(4 + r4); // lwz @ 0x807D34D0
    *(0x98 + r30) = r0; // stw @ 0x807D34D4
    *(0x94 + r30) = r5; // stw @ 0x807D34D8
    r0 = *(8 + r4); // lwz @ 0x807D34DC
    *(0x9c + r30) = r0; // stw @ 0x807D34E0
    r5 = *(0 + r4); // lwz @ 0x807D34E4
    r0 = *(4 + r4); // lwz @ 0x807D34E8
    *(0xa4 + r30) = r0; // stw @ 0x807D34EC
    *(0xa0 + r30) = r5; // stw @ 0x807D34F0
    r0 = *(8 + r4); // lwz @ 0x807D34F4
    *(0xa8 + r30) = r0; // stw @ 0x807D34F8
    r5 = *(0 + r4); // lwz @ 0x807D34FC
    r0 = *(4 + r4); // lwz @ 0x807D3500
    *(0xb0 + r30) = r0; // stw @ 0x807D3504
    *(0xac + r30) = r5; // stw @ 0x807D3508
    r0 = *(8 + r4); // lwz @ 0x807D350C
    *(0xb4 + r30) = r0; // stw @ 0x807D3510
    *(0xb8 + r30) = r6; // stw @ 0x807D3514
    *(0xbc + r30) = r14; // stw @ 0x807D3518
    r5 = *(0 + r4); // lwz @ 0x807D351C
    r0 = *(4 + r4); // lwz @ 0x807D3520
    *(0xc4 + r30) = r0; // stw @ 0x807D3524
    *(0xc0 + r30) = r5; // stw @ 0x807D3528
    r0 = *(8 + r4); // lwz @ 0x807D352C
    *(0xc8 + r30) = r0; // stw @ 0x807D3530
    r5 = *(0 + r4); // lwz @ 0x807D3534
    r0 = *(4 + r4); // lwz @ 0x807D3538
    *(0xd0 + r30) = r0; // stw @ 0x807D353C
    *(0xcc + r30) = r5; // stw @ 0x807D3540
    r0 = *(8 + r4); // lwz @ 0x807D3544
    *(0xd4 + r30) = r0; // stw @ 0x807D3548
    r5 = *(0 + r4); // lwz @ 0x807D354C
    r0 = *(4 + r4); // lwz @ 0x807D3550
    *(0xdc + r30) = r0; // stw @ 0x807D3554
    *(0xd8 + r30) = r5; // stw @ 0x807D3558
    r0 = *(8 + r4); // lwz @ 0x807D355C
    *(0xe0 + r30) = r0; // stw @ 0x807D3560
    *(0xe4 + r30) = r14; // stw @ 0x807D3564
    FUN_805E3430(); // bl 0x805E3430
}