/* Function at 0x806E4438, size=136 bytes */
/* Stack frame: 0 bytes */

int FUN_806E4438(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r3, 0 */ // 0x806E4438
    r3 = *(0 + r3); // lwz @ 0x806E443C
    r0 = *(0x24 + r3); // lbz @ 0x806E4440
    if (>=) goto 0x0x806e44b8;
    /* lis r3, 0 */ // 0x806E444C
    r8 = *(0 + r3); // lwz @ 0x806E4454
    if (<) goto 0x0x806e4470;
    if (>=) goto 0x0x806e4470;
    r3 = r8 + r4; // 0x806E4464
    r0 = *(0x2920 + r3); // lbz @ 0x806E4468
    /* b 0x806e4474 */ // 0x806E446C
    /* li r0, 0xff */ // 0x806E4470
    /* lis r3, 0 */ // 0x806E4474
    /* li r7, 1 */ // 0x806E4478
    r5 = *(0 + r3); // lwz @ 0x806E447C
    r6 = r7 << r0; // slw
    /* li r3, 0 */ // 0x806E4484
    r0 = *(0x291c + r5); // lwz @ 0x806E4488
    /* mulli r0, r0, 0x58 */ // 0x806E448C
    r5 = r5 + r0; // 0x806E4490
    r0 = *(0x48 + r5); // lwz @ 0x806E4494
    /* and. r0, r6, r0 */ // 0x806E4498
    /* beqlr  */ // 0x806E449C
    r0 = *(0x2930 + r8); // lwz @ 0x806E44A0
    r4 = r7 << r4; // slw
    /* and. r0, r4, r0 */ // 0x806E44A8
    /* bnelr  */ // 0x806E44AC
    /* li r3, 1 */ // 0x806E44B0
    return;
    /* li r3, 0 */ // 0x806E44B8
    return;
}