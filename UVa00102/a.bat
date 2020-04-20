md input
md output
for /L %%D in (0,1,9) do move uva00102.i%%D input\input0%%D.txt
for /L %%D in (0,1,9) do move uva00102.o%%D output\output0%%D.txt
for /L %%D in (10,1,20) do move uva00102.i%%D input\input%%D.txt
for /L %%D in (10,1,20) do move uva00102.o%%D output\output%%D.txt
zip -r test.zip *put
rd input /S /Q
rd output /S /Q