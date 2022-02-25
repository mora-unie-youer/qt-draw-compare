AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = qt-draw-compare
qt_draw_compare_CXXFLAGS = @QT_CXXFLAGS@
qt_draw_compare_LDADD = @QT_LIBS@

qt_draw_compare_qtheaders = \
	draw_widget.hh \
	main_window.hh
qt_draw_compare_moc_sources = $(qt_draw_compare_qtheaders:.hh=.moc.cc)

qt_draw_compare_SOURCES = \
	$(qt_draw_compare_moc_sources) \
	draw_widget.cc \
	main_window.cc \
	main.cc

.hh.moc.cc:
	$(QT_MOC) -o $@ $(qt_draw_compare_CPPFLAGS) $(CPPFLAGS) $<
SUFFIXES = .hh .moc.cc
CLEANFILES = $(qt_draw_compare_moc_sources)
