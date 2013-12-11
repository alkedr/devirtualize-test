SUBDIRS = 1 2 3 4 5

.SUFFIXES:

.DEFAULT_GOAL := test

%:
	@for dir in $(SUBDIRS); do \
		$(MAKE) --no-print-directory -C $$dir $*; \
	done

